#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(x==0)
    cout<<"Zero is not divisible.";
    else if((x%3==0 || x%5==0) && (x%15!=0)) cout<< "The number is divisible by 3 or 5 and not divisible by 15.";
    else cout<<"The number is not divisible by 3,5,15.";
    return 0;
}