// wap to implement linear search
#include <iostream>
using namespace std;

int search(int arr[], int size, int elementSearch, int index)
{
    if (index < size)
    {
        if (elementSearch == arr[index])
        {
            return index;
        }
        else
        {
            return search(arr, size, elementSearch, index + 1);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " element: ";
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    int elementSearch;
    cin >> elementSearch;
    int result = search(arr, size, elementSearch, 0);
    if (result == -1)
    {
        cout << elementSearch << " not found" << endl;
    }
    else
    {
        cout << elementSearch << " found in position " << result << endl;
    }
    return 0;
}
