#include <iostream>
#include <cstring>
#include "functions.h"

double getAverage(int arr[], int size) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}

void alterArray(char arr[]){
    void *pos = memchr(arr, '@', 42);
}

void mvval(){
    char array[10];
    void *pos = memchr(array, '@', 42);
}