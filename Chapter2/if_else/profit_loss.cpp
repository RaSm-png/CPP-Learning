#include<iostream>
using namespace std;
int main(){
    int s,b;
    cout<<"Selling price: ";
    cin>>s;
    cout<<"Buying price: ";
    cin>>b;
    if(s<b){
        cout<<"Loss.\n";
        cout<<"Total loss: "<<(b-s);
    }
    else if(s>b){
        cout<<"Profit.\n";
        cout<<"Total profit: "<<(s-b);
    }else cout<<"No profit, no loss.";
    return 0;
}