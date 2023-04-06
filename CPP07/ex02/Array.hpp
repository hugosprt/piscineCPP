#include <iostream>
#include <stdexcept>
#include <cstdlib>
template <typename T>
class Array {
public:
    Array() : size_(0), data_(NULL) {}

    Array(unsigned int n) : size_(n), data_(new T[n]) {}

    Array(const Array<T>& other) : size_(other.size_), data_(new T[size_]) {
        for (size_t i = 0; i < size_; ++i) {
            data_[i] = other.data_[i];
        }
    }

    Array<T>& operator=(const Array<T>& other) {
        if (this == &other) {
            return *this;
        }

        delete[] data_;
        size_ = other.size_;
        data_ = new T[size_];

        for (size_t i = 0; i < size_; ++i) {
            data_[i] = other.data_[i];
        }

        return *this;
    }

    ~Array() {
        delete[] data_;
    }

    T& operator[](size_t index) {
        if (index >= size_) {
            throw std::out_of_range("Index out of range");
        }
        return data_[index];
    }

    const T& operator[](size_t index) const {
        if (index >= size_) {
            throw std::out_of_range("Index out of range");
        }
        return data_[index];
    }

    size_t size() const {
        return size_;
    }

private:
    size_t size_;
    T* data_;
};

template <typename T>
std::ostream & operator<<( std::ostream & o, Array<T> & toTheRight ) {
	
	for( size_t index = 0; index < toTheRight.size(); ++index ) {
		
		o << "Array[ "<< index << " ] = " << toTheRight[ index ] << std::endl;
	}
	return o;
};