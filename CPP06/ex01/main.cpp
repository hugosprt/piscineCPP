#include <iostream>
#include "data.h"

int main() {
    Data data;
    data.x = 42;
    data.y = 3.14f;

    uintptr_t serialized = serialize(&data);
    Data* deserialized = deserialize(serialized);

    if (&data == deserialized) {
        
        std::cout << "Les pointeurs sont identiques. Test réussi !" << std::endl;
    } else {

        std::cout << "Les pointeurs ne sont pas identiques. Test échoué !" << std::endl;
    }

    return 0;
}
