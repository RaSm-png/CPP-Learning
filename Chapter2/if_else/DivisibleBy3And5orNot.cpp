#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(x==0)
    cout<<"Zero is not divisible.";
    // if(x%15==0) cout<<"The number is divisible by 3 & 5.";
    else if(x%3==0 && x%5==0) cout<<"The number is divisible by 3 & 5.";
    else cout<<"The number isn't.";

    return 0;
}