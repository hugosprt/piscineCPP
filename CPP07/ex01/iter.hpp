#include <iostream>
#include <stdlib.h>

template <typename T, typename Teub>
void iter(T Array[], size_t size, Teub (function)){
   for (size_t i = 0; i < size; i++)
   {
	 function(Array[i]);
   }
}