#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}