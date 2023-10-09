//wap to print pascal triangle
#include <iostream>
using namespace std;

int main() {
    cout << "Enter how many rows you want : ";
    int rows;
    cin >> rows;
    cout << endl;

    int flag = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        int ver = flag;
        while (ver > 0) {
            int rem = ver % 10;
            cout << rem << " ";
            ver /= 10;
        }

        flag *= 11;
        cout << endl;
    }

    return 0;
}
