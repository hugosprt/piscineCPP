#include "PmergeMe.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        std::cout << "Usage: " << argv[0] << " <sequence of integers>\n";
        return 1;
    }

    PmergeMe sorter;
    for(int i = 1; i < argc; ++i)
        sorter.read(std::string(argv[i]));
    sorter.sortAndPrint();

    return 0;
}
