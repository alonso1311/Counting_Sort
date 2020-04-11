#include"header.h"
#include"random.h"
#include"counting_sort.h"

using namespace std;

int main() {
    int arr[size_array];
    rand_int(arr);

    cout << "Original:  ";
    for(const auto& i : arr)
        cout << i << " ";

    cout << endl;
    count_sort(arr);  

    return 0;
}
