#include "RPN.hpp"
#include <stdexcept>
#include <cstdlib>

RPNCalculator::RPNCalculator() {}

RPNCalculator::~RPNCalculator()
{
}

RPNCalculator::RPNCalculator(const RPNCalculator &toCopy) {
	
	*this = toCopy;
	return;
}


RPNCalculator& RPNCalculator::operator=(const RPNCalculator &toTheRight) {
	
	if (this == &toTheRight) {
		return *this;
	}
	return *this;
}

void RPNCalculator::push(int num) {
    stack_.push(num);
}

void RPNCalculator::calculate(const std::string& operation) {
    if(stack_.size() < 2) {
        throw std::runtime_error("Error: insufficient values for operation");
    }

    int operand2 = stack_.top(); stack_.pop();
    int operand1 = stack_.top(); stack_.pop();

    if (operation == "+") stack_.push(operand1 + operand2);
    else if (operation == "-") stack_.push(operand1 - operand2);
    else if (operation == "*") stack_.push(operand1 * operand2);
    else if (operation == "/") {
        if(operand2 == 0) throw std::runtime_error("https://fr.wikipedia.org/wiki/Division_par_z%C3%A9ro");
        stack_.push(operand1 / operand2);
    }
    else{
        throw std::runtime_error("Error: invalid operator");
    }
}

int RPNCalculator::getResult() const {
    if(stack_.size() != 1) {
        throw std::runtime_error("Error: too many operands");
    }
    return stack_.top();
}
