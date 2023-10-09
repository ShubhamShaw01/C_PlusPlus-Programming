//wap to implement selection sort
#include <iostream>
#include <vector>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    cout << "Enter the size of the array : ";
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cout << "Enter the " << (i + 1) << " element : ";
        cin >> arr[i];
    }

    cout << " .. Your entered array is .. " << endl;
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << " .. Sorted array using selection sort .. " << endl;
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
