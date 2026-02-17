#include<bits/stdc++.h>
using namespace std;
int longest(string s , int k ){
    int n = s.size();
    int maxlen = 0 ;
    unordered_map<char,int> mp;
    for(int i = 0 ; i < n ; i++){
        mp.clear();
        for(int j = i ; j < n ; j++){
            mp[s[j]]++;
            if(mp.size() <= k){
                maxlen = max(maxlen , j - i + 1);
            }
            else{
                break;
            }


        }
    }
    return maxlen;
}
int main(){
    string s = "aaabbccd";
}