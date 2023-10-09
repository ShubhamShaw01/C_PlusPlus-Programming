// write a c++ program to check whether no is pallindrome or not
#include <iostream>
using namespace std;
int isPallindrome(int no)
{
    int check = 0;
    while (no > 0)
    {
        int rem = no % 10;
        check = check * 10 + rem;
        no /= 10;
    }
    return check;
}

int main()
{
    int no;
    cout << "Enter the no to check : ";
    cin >> no;
    int result = isPallindrome(no);
    if (result == no)
    {
        cout << no << " is Pallindrome no ." << endl;
    }
    else
    {
        cout << no << " Is not a Pallindrome no its value is " << result << endl;
    }

    return 0;
}