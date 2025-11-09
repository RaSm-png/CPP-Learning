 // data_type *pointer variable name = integer type container
 //for integer: int *ptri = &x; x is an integer variable
 //for floating: float *ptrf = &x; x is a float variable


#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr = &x;     // pointer is one kind of variable, which can store address. 
    cout<<&x<<"\n";  //prints the address
    cout<< ptr<<"\n"; // prints the address
    cout<<*ptr<<"\n"; // prints the value of the variable that the pointer is pointing
                       

    *ptr=20;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";




    return 0;
}