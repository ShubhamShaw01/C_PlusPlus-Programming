//Occurance of element in array
#include<iostream>
using namespace std;

int main(){
    int arr[20],n,element;
    cout<<"Enter the size of the array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element :";
        cin>>arr[i];
    }
    cout<<"your entered array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Enter the element to search its occurrence";
    cin>>element;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element)
            count++;
    }
    cout<<"Enter element "<<element<<" occurrence is :"<<count;
    return 0;
}