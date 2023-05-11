#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> nums(array, array + sizeof(array) / sizeof(int));

    try {
        std::vector<int>::iterator it = easyfind(nums, 3);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(nums, 10);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

  //  return 0;
}
