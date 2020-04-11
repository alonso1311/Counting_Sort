#ifndef counting_sort_H
#define counting_sort_H

#include"header.h"

void count_sort(int array[]){
    //-Step 1
    int count[last+1];

    memset(count, 0, sizeof(count));
        
    //-Step 2
    for(int i = 0; i < size_array; ++i) 
        count[array[i]]++;

    //-Step 3
    for(int i = 1; i <= last+1; ++i)
        count[i] += count[i-1];

    //-Step 4
    int output[size_array];

    //-Step 5
    for(int i = 0; i < size_array; ++i){
        output[count[array[i]]-1] = array[i];
        count[array[i]]--;
    }
   
    cout << "Sorted:    ";
    for(const auto& i : output)
        cout << i << " ";
}

#endif //counting_sort_H
