#include "Span.hpp"
#include "stdlib.h"

Span::Span() : max_size(0) {}

Span::Span(size_t maxSize) : max_size(maxSize) {}

Span::Span(const Span& other) : data(other.data), max_size(other.max_size) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        data = other.data;
        max_size = other.max_size;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int value) 
 {
        if (this->data.size() < this->max_size) {
            this->data.push_back(value);
        } else {
            throw std::runtime_error("Exceeded max size");
        }
}

void Span::print2() const {
        for (std::vector<int>::const_iterator it = this->data.begin(); it != this->data.end(); ++it) {
            std::cout << *it << ' ';
        }
        std::cout << '\n';
    }