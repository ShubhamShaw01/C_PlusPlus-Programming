// wap to implement Binary Search
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int left, int right, int elementSearch)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == elementSearch)
        {
            return mid;
        }
        else if (arr[mid] < elementSearch)
        {
            return search(arr, mid + 1, right, elementSearch);
        }
        else
        {
            return search(arr, left, mid - 1, elementSearch);
        }
    }
    return -1;
}

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " element: ";
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    int elementSearch;
    cin >> elementSearch;

    int result = search(arr, 0, size - 1, elementSearch);

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
