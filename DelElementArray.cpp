// write a c++ code to del element and dynamically adjust its sides
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the size of the array : ";
    int size;
    cin >> size;

    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter the " << i + 1 << " element : ";
        cin >> element;
        arr.push_back(element);
    }

    cout << "The array you entered..." << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Enter the element to delete : ";
    int delNo;
    cin >> delNo;

    int check = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == delNo)
        {
            arr.erase(arr.begin() + i);
            check = 1;
            break;
        }
    }

    if (check == 0)
    {
        cout << delNo << " is not present in the array" << endl;
    }

    cout << "The new array is: " << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
