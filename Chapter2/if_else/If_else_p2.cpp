#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>> a;
    // if(a>=0){
    //     cout<< "The number is: " <<a <<endl;
    // }
    // else cout<<"The number is: " <<-(a);
    // if(a==0) 
    // cout<<"This is zero.";

    //if I want to change n intu its absolute value:
    if(a<0) cout<<(-a);
    else cout<<a;
    return 0;
}