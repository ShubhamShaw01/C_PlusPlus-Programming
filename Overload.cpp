//wap to implement overload 
#include<iostream>
using namespace std;

class OverLoad{
    public:
    void showMessage(){
        cout<<"Here's your message"<<endl;
    }
    void showMessage(int a){
        cout<<"You entered : "<<a<<endl;
    }
    void showMessage(int a ,int b){
        cout<<"sum of two no : "<<a+b<<endl;
    }
};
int main(){
    OverLoad l;
    l.showMessage();
    l.showMessage(5);
    l.showMessage(5,8);
    return 0;
}