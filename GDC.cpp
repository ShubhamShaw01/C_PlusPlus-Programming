//wap to print gdc of two no
#include <iostream>
using namespace std;

int hCF(int no1, int no2) {
    if (no2 == 0) {
        return no1;
    } else {
        return hCF(no2, no1 % no2);
    }
}

int main() {
    cout << "Enter the first no : ";
    int no1;
    cin >> no1;

    cout << "Enter the second no : ";
    int no2;
    cin >> no2;

    int no3 = hCF(no1, no2);
    cout << "GCD of " << no1 << " and " << no2 << " is : " << no3 << endl;

    return 0;
}
