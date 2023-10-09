//write a c++ program to check whether no is armstrong or not
#include<iostream>
using namespace std;
int isArmstrong(int no){
    int var=no%10;
    int flag=0;
    if(no<1){
        return 0;
    }
    else{
        flag=var*var*var;
        return (flag + isArmstrong (no/10));
    }
}

int main(){
    int no;
    cout<<"Enter the no to check : ";
    cin>>no;
    int result=isArmstrong(no);
    if (result==no){
        cout<<no<<" is Armstrong no ."<<endl;
    }
    else{
        cout<<no<<" Is not a Armstrong no its value is "<<result<<endl;
    }

    return 0;
} 