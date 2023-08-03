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

void PmergeMe::sortAndPrintVector(std::vector<int>& vec, const std::string& name) {
    std::cout << "Unsorted sequence in " << name << ": ";
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    // Sort the container using the standard sort function
    std::sort(vec.begin(), vec.end());

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

    // Sort the container using the list sort function
    list.sort();

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
