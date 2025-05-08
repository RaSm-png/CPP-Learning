#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(x>=100 && x<1000)
    cout<<"T1he number has three digits.";
    else cout<<"The number is not a three digit number.";
    return 0;
}