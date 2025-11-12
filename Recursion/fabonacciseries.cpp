//fabonacci series: 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21,........ 
//sum of previous 2 digits

#include<iostream>
using namespace std;

int fabonacci(int n){
    if(n == 0 || n == 1) return n;
    return fabonacci(n-1) + fabonacci(n-2);

}

int main(){
    int result = fabonacci(8);
    cout<<result;
    return 0;
}