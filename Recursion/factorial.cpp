#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1) return 1;           //base case
    return n * factorial(n-1);   //factorial(n-1) is -> assumption and n * factorial(n-1) is -> selfwork
}

int main(){
    int n;
    cin>>n;
    int result = factorial(n);
    cout<<result<<endl;
}