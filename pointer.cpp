#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr = &x;
    cout<<&x<<"\n";
    cout<< ptr<<"\n"; 
    cout<<*ptr<<"\n";

    *ptr=20;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";




    return 0;
}