// Inheritance in C++
#include <iostream>
using namespace std;
class Bird
{
public:
    string message = "chirping";
};
class Piegon : public Bird
{
public:
    string message = "flying";
    Bird b;
    void printMessage()
    {
        b = Bird();
        cout << "Birds : " << b.message << endl;
        cout << "Piegon : " << message << endl;
    }
};

int main()
{
    Piegon pc;
    pc.printMessage();

    return 0;
}