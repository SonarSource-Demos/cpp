#include <iostream>
#include <cstring>
#include "functions.h"

int main()
{
    int values[5] = {1,2,3,4,5};
    double avg = getAverage(values, 10);
    std::cout << avg;
}

void mvval(){
    char array[10];
    void *pos = memchr(array, '@', 42);
}

