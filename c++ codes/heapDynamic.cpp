#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    arr.reserve(3);  // Reserve space for performance

    for (int val : {5, 10, 15}) {
        arr.push_back(val);
    }

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.pop_back();  // Remove last element

    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
