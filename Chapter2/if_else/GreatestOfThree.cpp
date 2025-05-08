#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;
    cout<<"Enter 3rd number: ";
    cin>>z;
    if(x>y && x>z)
    cout<<x <<" is the greatest.";
    else if(y>x && y>z)
    cout<<y <<" is the greatest.";
    else
    cout<<z <<" is the greatest.";
    return 0;
}

