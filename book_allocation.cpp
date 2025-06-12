#include<iostream>
using namespace std;

bool possible_solution(int arr[], int n, int m, int maxPages) {
    int students = 1, pages = 0;
    for(int i = 0; i < n; i++) {
        if(pages + arr[i] <= maxPages) {
            pages += arr[i];
        } else {
            students++;
            if(students > m || arr[i] > maxPages) return false;
            pages = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];

    int low = 0, high = sum, result = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(possible_solution(arr, n, m, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[4] = {10, 20, 30, 40};
    int n, m;
    cout << "Enter number of students: ";
    cin >> m;
    cout << "Enter number of books: ";
    cin >> n;
    cout << "Minimum pages: " << allocateBooks(arr, n, m) << endl;
    return 0;
}
