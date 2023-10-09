//wap to check perfect square
#include <iostream>
#include <cmath>
using namespace std;

double squareRoot(int no) {
    return sqrt(no);
}

int main() {
    cout << "Enter the number: ";
    int no;
    cin >> no;
    double result = squareRoot(no);

    if (result - floor(result) == 0) {
        cout << no << " is a perfect square." << endl;
    }
    else {
        cout << no << " is not a perfect square. Its square root is " << result << endl;
    }

    return 0;
}
