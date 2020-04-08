#include"header.h"
#include"random.h"

using namespace std;

int main() {
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    rand_int(0, 15, size, arr);

    for(auto const& i : arr)
        cout << i << endl;

    return 0;
}
