#include<iostream>
#include<climits>

using namespace std;

findFirstAndLastIndex(string s, char ch, int *first, int *last ){

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ch){
            *first = i;
            break;
        }
    }
    
    for(int i = s.size()-1; i>=0; i--){
        if(s[i] == ch){
            *last = i;
            break;
        }
    }
}


int main(){
    string s = "basescvvcbbaaaddetges";
    char ch = 'a';
    int first = INT_MIN;
    int last = INT_MIN;

    int *pf = &first;
    int *pl = &last;

    findFirstAndLastIndex(s, ch, pf, pl);
    cout<<*pf<<" "<<*pl<<"\n";
    cout<<first<<" "<<last;
}