#ifndef random_H
#define random_H

#include"header.h"

void rand_int(int array[]){
    srand((unsigned)time(NULL));

    for(int i = 0; i < size_array; ++i)
        array[i] = rand()%last + first;
}

#endif //random_H
