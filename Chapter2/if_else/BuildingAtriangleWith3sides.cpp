#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the sides: \n";
    cin>>x;
    cin>>y;
    cin>>z;
    if((x+y)>z && (x+z)>y && (y+z)>x)
    cout<<"Valid triangle";
    else cout<<"Invalid triangle.";
    return 0;
}