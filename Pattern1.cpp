#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the rows : ";
    int row;
    cin >> row;
    cout << endl;

    for (int i = 1; i <= row; i++)
    {
        for (int j = row - i; j >= 1; j--)
        {
            cout << "\t";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}
