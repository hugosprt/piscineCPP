#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <sys/time.h>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe( const PmergeMe &toCopy ) {

	*this = toCopy;
	return;
}


PmergeMe &PmergeMe::operator=( const PmergeMe &toTheRight ) {
    
	if (this == &toTheRight) {
		return *this;
	}
	return *this;
}

void PmergeMe::read(const std::string& str) {
    int num = atoi(str.c_str());
    vec_.push_back(num);
    list_.push_back(num);
}

void PmergeMe::fordJohnsonSort(std::vector<int>& vec) {
    if (vec.size() <= 1) return;

    for (size_t i = 0; i < vec.size() - 1; i += 2) {
        if (vec[i] > vec[i + 1]) {
            std::swap(vec[i], vec[i + 1]);
        }
    }
    for (size_t i = 2; i < vec.size(); i++) {
        int key = vec[i];
        int j = i - 1;
        
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}


void PmergeMe::fordJohnsonSort2(std::list<int>& lst) {
     if (lst.size() <= 1) return;

    std::list<int>::iterator it = lst.begin();
    while (it != lst.end()) {
        std::list<int>::iterator next_it = it;
        ++next_it;

        if (next_it != lst.end() && *it > *next_it) {
            std::swap(*it, *next_it);
        }

        if (next_it == lst.end()) break;

        it = ++next_it;
    }

    for (it = ++lst.begin(); it != lst.end(); ++it) {
        int key = *it;
        std::list<int>::iterator j = it;
        --j;
        
        std::list<int>::iterator temp = it;
        while (j != lst.begin() && *j > key) {
            *temp = *j;
            temp = j;
            --j;
        }

        if (*j > key) { // Handle the case where j is at begin()
            *temp = *j;
            *j = key;
        } else {
            *(++j) = key;
        }
    }
}


void PmergeMe::sortAndPrintVector(std::vector<int>& vec, const std::string& name) {
    std::cout << "Unsorted sequence in " << name << ": ";
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

   fordJohnsonSort(vec);

    clock_gettime(CLOCK_MONOTONIC, &end);

    double duration = static_cast<double>((end.tv_sec - start.tv_sec) * 1000000000 +
                                             (end.tv_nsec - start.tv_nsec)) / 1000.0;

    std::cout << "Sorted sequence in " << name << ": ";
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

   std::cout << "Time used by the algorithm with " << name << ": "
              << std::fixed << std::setprecision(4) << duration << "us\n";

}

void PmergeMe::sortAndPrintList(std::list<int>& list, const std::string& name) {
    std::cout << "Unsorted sequence in " << name << ": ";
    for(std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    fordJohnsonSort2(list);

     clock_gettime(CLOCK_MONOTONIC, &end);
     double duration = static_cast<double>((end.tv_sec - start.tv_sec) * 1000000000 +
                                             (end.tv_nsec - start.tv_nsec)) / 1000.0;

    std::cout << "Sorted sequence in " << name << ": ";
    for(std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

  std::cout << "Time used by the algorithm with " << name << ": "
              << std::fixed << std::setprecision(4) << duration << "us\n";

}

void PmergeMe::sortAndPrint() {
    sortAndPrintVector(vec_, "std::vector");
    std::cout << '\n';
    sortAndPrintList(list_, "std::list");
}
