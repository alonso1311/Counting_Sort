#include"header.h"
#include"random.h"
#include"counting_sort.h"

int main() {
    int arr[size_array];
    rand_int(arr);

    cout << "Original:  ";
    for(const auto& i : arr)
        cout << i << " ";

    cout << endl;
    auto start = high_resolution_clock::now();
    count_sort(arr);  
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\nTime --> " << duration.count() << " microseconds" << endl;
    return 0;
}
