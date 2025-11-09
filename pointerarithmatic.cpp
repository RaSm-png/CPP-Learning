#include<iostream>
using namespace std;

int main(){
    int x = 40;
    int *ptr = &x;

    cout<<ptr<<endl; //address
    cout<<ptr+1<<endl;//next address
    cout<<--ptr <<endl;
    cout<<ptr<<endl;
}