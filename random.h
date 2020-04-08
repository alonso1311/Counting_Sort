#ifndef random_H
#define random_H

#include"header.h"

void rand_int(int a, int b, int size, int array[]){
    srand((unsigned)time(NULL));

    for(int i = 0; i < size; ++i)
        array[i] = rand()%b + a;
}

#endif //random_H
