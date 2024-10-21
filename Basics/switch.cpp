#include<iostream>
using namespace std;

int main() {
    int day;
    cout<<"Enter a number for a day";
    cin>>day;
    switch (day)
    
    {
    case 1:
        cout<<"The day is Monday";
        break;
    case 2:
        cout<<"The day is Tuesday";
        break;
    case 3:
        cout<<"The day is Wednesday";
        break;
    

    
    default:
    cout<<"invalid Syntax";
        break;
    }
    return 0;
}