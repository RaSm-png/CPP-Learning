// #include<iostream>
// using namespace std;

// void process(int *arr, int n){
//     for(int i = 0; i<n; i++){
//         cout<<*(arr + i)<<endl;
//     }

// }
// int main(){
//     int arr[3] = {2, 5, 7};
//     int *ptr = &arr[0];
//     // cout<<*(ptr+1);
//     process(ptr, 3);

// }


// #include<iostream>
// using namespace std;

// void process(int *arr, int n){
//     cout<<"process function: "<<arr<<endl;
//     for(int i = 0; i<n; i++){
//         cout<<*(arr + i)<<endl;
//     }

// }
// int main(){
//     int arr[3] = {2, 5, 7};
//     cout<<*arr<<endl;
//     cout<<arr<<endl;
//     process(arr, 3);

// }


#include<iostream>
using namespace std;

void process(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<*(arr + i)<<endl;
    }

}
int main(){
    int arr[3] = {2, 5, 7};

    process(arr, 3);

}