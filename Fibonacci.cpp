//wap to print fibonacci series
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the series : ";
    int size;
    cin >> size;

    int t1 = 0, t2 = 1, t3;
    for (int i = 1; i <= size; i++) {
        if (i == 1) {
            cout << t1 << "\t";
        } else if (i == 2) {
            cout << t2 << "\t";
        } else {
            t3 = t1 + t2;
            cout << t3 << "\t";
            t1 = t2;
            t2 = t3;
        }
    }

    return 0;
}
