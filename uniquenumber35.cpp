#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique = 0;

    for (int i = 0; i < n; i++) {
        unique ^= arr[i];  // XOR logic
    }

    cout << "Unique number: " << unique << endl;
    return 0;
}