//wap to check perfect no
#include <iostream>
using namespace std;

int isPerfect(int no) {
    int sum = 0;
    for (int i = 1; i < no; i++) {
        if (no % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cout << "Enter the number to check if it is a perfect number: ";
    int no;
    cin >> no;
    int result = isPerfect(no);

    if (no == result) {
        cout << no << " is a perfect number." << endl;
    } else {
        cout << no << " is not a perfect number, and the sum of its divisors is " << result << "." << endl;
    }

    return 0;
}
