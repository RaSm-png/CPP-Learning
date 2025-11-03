//Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

#include<iostream>
#include<vector>
#include <climits>
using namespace std;


int maximumOnesRow (vector<vector<int>> &v){
    int maxOnes=INT_MIN;
    int maxOnesRow=-1;
    int columns=v[0].size();
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]==1){
                int numberofOnes=columns-j;
                if(numberofOnes>maxOnes){
                    maxOnes=numberofOnes;
                    maxOnesRow=i;
                }
                break;
            }
        }
    }
    return maxOnesRow;

}

int main(){
    int n,m;
    cout<<"Enter the row & columns: ";
    cin>> n>>m;
    vector<vector<int>> vec (n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }

    int ans=maximumOnesRow(vec);
    cout<<ans<<endl;

    return 0;

}