#include <iostream>
using namespace std;


class AnimalSound {
public:
    virtual void showMessage() {
        cout << "Sound of an animal" << endl;
    }
};

class Dog : public AnimalSound {
public:
    void showMessage() override{
        cout << "Sound = Bark" << endl;
    }
};

class Cat : public AnimalSound {
public:
    void showMessage() override{
        cout << "Sound = Meow" << endl;
    }
};

int main() {
    AnimalSound* myDog = new Dog();
    AnimalSound* myCat = new Cat();
    
    myDog->showMessage();
    myCat->showMessage();
    
    delete myDog; 
    delete myCat;
    
    return 0;
}
