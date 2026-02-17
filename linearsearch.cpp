#include<bits/stdc++.h>
using namespace std;
int linearsearch(vector<int> &LS , int num){
    for(int i = 0 ; i < LS.size() ; i++){
        if(LS[i] == num){
            return i;
        }
    }
    return -1;
}
int main (){
    vector<int> LS = {6,7,4,8,1};
    int num = 4;
    cout << linearsearch(LS , num);
    return 0; 
}

// TC = O(N)
// SC = O(1)