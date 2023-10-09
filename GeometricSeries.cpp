// wap to print gp series
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter the size of the series : ";
    double size;
    cin >> size;

    cout << "Enter the first term of GP : ";
    double firstTerm;
    cin >> firstTerm;

    cout << "Enter the number in which power is applied : ";
    double no;
    cin >> no;

    double sum = 0;

    for (double i = 0; i < size; i++)
    {
        double temp = firstTerm * pow(no, i);
        sum += temp;
        cout << temp << "\t";
    }

    cout << endl;
    cout << "Sum of the series : " << sum << endl;

    return 0;
}
