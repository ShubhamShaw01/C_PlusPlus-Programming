//wap to check the user given no is prime or not
#include<iostream>
using namespace std;
bool isPrime(int no){
    if (no<=1){
        return false;
    }
    for(int i=2;i<no;i++){
        if (no%i==0)
            return false;
    }
    return true;
}
int main(){
    int no;
    cout<<"Enter the no to check : ";
    cin>>no;
    if(isPrime(no)){
        cout<<no<<" is prime no "<<endl;
    }
    else{
        cout<<no<<" is not a prime no "<<endl;
    }

    return 0;
}