//wap to print pattern
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the rows : ";
    int row;
    cin >> row;
    cout << endl;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}
