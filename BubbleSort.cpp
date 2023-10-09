//wap to implement bubble sort
#include <iostream>
using namespace std;

int main() {
    cout << "Enter how many inputs you want to give : ";
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    }

    cout << "The following array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The sorted array is: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
