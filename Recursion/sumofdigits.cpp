#include<iostream>
using namespace std;
int digitSum(int n){
    if(n >= 0 && n <= 9) return n;

    return digitSum(n/10)+digitSum(n%10);
}
int main(){
    int result = digitSum(1234);
    cout<<result<<endl;
}