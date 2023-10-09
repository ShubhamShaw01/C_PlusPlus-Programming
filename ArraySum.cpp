//write a c++  code for to get the sum of the array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    int element;
    int count=0;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int> a;
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>element;
        a.push_back(element);
    }
    cout<<"Your entered array is "<<endl;
    for(int i : a ){
        count+=i;
        cout<<i<<"\t";
    }
    cout<<endl<<"sum of all element = "<<count<<endl;
    return 0;
}