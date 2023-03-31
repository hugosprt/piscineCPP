#ifndef DATA_H
#define DATA_H

#include <stdint.h> 

struct Data {
    int x;
    float y;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif 
