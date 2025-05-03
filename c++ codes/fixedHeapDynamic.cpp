#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int[]> arr(new int[5]);  // Smart pointer manages heap memory

    for (int i = 0; i < 5; ++i) {
        *(arr.get() + i) = i * 10;  // Access via pointer arithmetic
    }

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    return 0;  // Memory auto-released by unique_ptr
}