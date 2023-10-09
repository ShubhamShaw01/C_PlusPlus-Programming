//wap to print arithmatic series
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the first term : ";
    int firstTerm;
    cin >> firstTerm;

    cout << "Enter the difference of the arithmetic series : ";
    int diff;
    cin >> diff;

    cout << "Enter the size of the series : ";
    int size;
    cin >> size;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        int temp = firstTerm + (diff * i);
        sum += temp;
        cout << temp << "\t";
    }

    cout << endl;
    cout << "Sum of this series is : " << sum << endl;

    return 0;
}
