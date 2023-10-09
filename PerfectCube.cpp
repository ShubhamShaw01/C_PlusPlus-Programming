//wap to check perfect cube
#include <iostream>
#include <cmath>
using namespace std;

double cubeRoot(int no) {
    return cbrt(no);
}

int main() {
    cout << "Enter the number: ";
    int no;
    cin >> no;
    double result = cubeRoot(no);

    if (result - floor(result) == 0) {
        cout << no << " is a perfect cube." << endl;
    }
    else {
        cout << no << " is not a perfect cube. Its cube root is " << result << endl;
    }

    return 0;
}
