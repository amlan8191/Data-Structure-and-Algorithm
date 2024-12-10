#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"ENter the size of the array: "<<endl;

    cin>>size;

    int arr[size];

    cout<<"Fill up the array: "<<endl;
    
    for(int i=0;i<size;i++){
        
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<"Element at "<<i<< " values are "<<arr[i]<<endl;
    }
}