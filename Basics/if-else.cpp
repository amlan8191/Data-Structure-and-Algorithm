#include<iostream>

using namespace std;

int main(){
    int a;
    int b;

    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    if(a>b){
        cout<<a<<" is greater than "<<b;
    }
    else {
        cout<<b<<" is greater than "<<a ;
    }
    return 0;
}