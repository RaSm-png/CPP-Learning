#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;

    int *ptrx = &x;
    int *ptry = &y;

    int add;

    int *result = &add;

    *result = *ptrx + *ptry;

    cout<<add<<"\n";

    //int addressadd = &ptrx + &ptry;
    cout<<&ptrx<<endl; // prints the address of the pointer
    cout<<&result<<endl;

    return 0;
}
