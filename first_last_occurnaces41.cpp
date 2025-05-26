#include <iostream>
using namespace std;

int first(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int last(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int even[5] = {1, 2, 3, 3, 5};
    cout << "First Occurrence of 3 is at index: " << first(even, 5, 3) << endl;
    cout << "Last Occurrence of 3 is at index: " << last(even, 5, 3) << endl;
    return 0;
}
