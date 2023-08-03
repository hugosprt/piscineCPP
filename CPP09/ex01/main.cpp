#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <deque>
#include <iterator>
#include <stdlib.h>

std::deque<std::string> split(const std::string &s, char delim) {
    std::deque<std::string> elems;
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        std::cerr << "Usage: " << argv[0] << " \"<RPN expression>\"" << std::endl;
        return 1;
    }
    
    std::string input(argv[1]);
    std::deque<std::string> tokens = split(input, ' ');

    RPNCalculator calculator;

    try {
        for(size_t i = 0; i < tokens.size(); i++) {
            std::string token = tokens[i];

            if(token == "+" || token == "-" || token == "*" || token == "/") {
                calculator.calculate(token);
            } else {
                int operand = atoi(token.c_str());
                if(operand < 0 || operand > 9) {
                    throw std::runtime_error("Error: invalid operand (" + token + ")");
                }
                calculator.push(operand);
            }
        }

        std::cout << calculator.getResult() << std::endl;
    } catch(const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
