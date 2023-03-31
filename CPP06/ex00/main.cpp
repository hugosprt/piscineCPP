#include <iostream>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <cmath>

bool is_displayable_char(int value) {
    return value >= 32 && value <= 126;
}

bool is_char_possible(int value) {
    return value >= 0 && value <= 255;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input_string>" << std::endl;
        return 1;
    }

    const char* input_string = argv[1];

    char as_char;
    int as_int;
    std::istringstream iss(input_string);
    iss >> as_int;

    float as_float = static_cast<float>(atof(input_string));
    double as_double = static_cast<double>(atof(input_string));

    bool char_possible = iss && is_char_possible(as_int);
    bool char_displayable = char_possible && is_displayable_char(as_int);
    if (char_possible) {
        as_char = static_cast<char>(as_int);
    }

    bool int_possible = iss;

    std::cout << "Input string: " << input_string << std::endl;
    
    if (char_displayable) {
        std::cout << "As char: '" << as_char << "'" << std::endl;
    } else if (char_possible) {
        std::cout << "As char: Non displayable" << std::endl;
    } else {
        std::cout << "As char: impossible" << std::endl;
    }

    if (int_possible) {
        std::cout << "As int: " << as_int << std::endl;
    } else {
        std::cout << "As int: impossible" << std::endl;
    }

    if (std::isnan(as_float)) {
        std::cout << "As float: nanf" << std::endl;
    } else if (std::isinf(as_float)) {
        std::cout << "As float: " << (as_float > 0 ? "+" : "-") << "inff" << std::endl;
    } else {
        std::cout.precision(1);
        std::cout.setf(std::ios::fixed);
        std::cout << "As float: " << as_float << "f" << std::endl;
    }

    if (std::isnan(as_double)) {
        std::cout << "As double: nan" << std::endl;
    } else if (std::isinf(as_double)) {
        std::cout << "As double: " << (as_double > 0 ? "+" : "-") << "inf" << std::endl;
    } else {
        std::cout.precision(1);
        std::cout.setf(std::ios::fixed);
        std::cout << "As double: " << as_double << std::endl;
    }

    return 0;
}
