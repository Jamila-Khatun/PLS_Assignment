#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr;

    for (int i = 0; i < arr.size(); ++i) {
        arr.at(i) = (i + 1) * 10;
    }

    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}
