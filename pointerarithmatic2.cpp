#include<iostream>
using namespace std;

int main(){
    int array[3] = {3, 4 ,7};

    int *ptr = &array[0];

    // cout<<ptr<<" " <<*(ptr+1)<<"\n";
    cout<<*ptr<<"\n";//3
    cout<<*ptr+1<<"\n";//4
    cout<<*ptr++<<"\n";//3->next address
    cout<<*++ptr<<"\n";//next address -> 7
}