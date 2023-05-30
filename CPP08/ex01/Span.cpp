#include "Span.hpp"
#include "stdlib.h"
#include <cstdlib>
#include <iostream>

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
     try {
        if (this->data.size() < this->max_size) {
            this->data.push_back(value);
        } 
        else {
		
			throw std::runtime_error( "Can't add new number because size is reached" );
		}
	    } catch ( const std::runtime_error & e ) {
		
        std::cerr << e.what() << std::endl;
    }
}

void Span::print2() const {
        for (std::vector<int>::const_iterator it = this->data.begin(); it != this->data.end(); ++it) {
            std::cout << *it << ' ';
        }
        std::cout << '\n';
    }

int Span::shortestSpan(){
    int shorty = 9999999;
    int i = 0;

    if (this->data.size() < 2)
        return (0);
    for (std::vector<int>::const_iterator it = this->data.begin(); it != this->data.end(); ++it) {
        i++;
         for (std::vector<int>::const_iterator it2 = this->data.begin() + i; it2 != this->data.end(); ++it2) {
             if (abs(*it2 - *it) < shorty)
                shorty = abs(*it2 - *it);
        }
     }
    return (shorty);
}

int Span::longestSpan(){
    int longy = 0;
    int i = 0;
    if (this->data.size() < 2)
        return (0);
    for (std::vector<int>::const_iterator it = this->data.begin(); it != this->data.end(); ++it) {
        i++;
         for (std::vector<int>::const_iterator it2 = this->data.begin() + i; it2 != this->data.end(); ++it2) {
             if (abs(*it2 - *it) > longy)
                longy = abs(*it2 - *it);
        }
     }
    return (longy);
}

void Span::addRange(const int start, const int end) {
	
	try {
		
		int rangeSpan = std::abs( end - start );
		
    	if ( this->data.size() + ( rangeSpan + 1 ) <= this->max_size ) {
			
    	    std::vector<int> range;
			int index = start;
			
			while( 1 ) {
				
				range.push_back( index );

				if ( index == end )
					break;
				
				if ( start < end )
					index++;
				else
					index--;
			}
			
    	    this->data.insert( this->data.end(), range.begin(), range.end() );
    	} else {
			
    	    throw std::runtime_error("Can't add the range because size will be reached");
			
    	}
	} catch ( const std::runtime_error & e ) {
		
        std::cerr << e.what() << std::endl;
    }
}	