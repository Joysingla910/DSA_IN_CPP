#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> &arr,  int target){
    unordered_map<int,int> mp;
    for(int i = 0  ; i < arr.size() ; i++){
        int need = target - arr[i];
        if(mp.find(need) != mp.end()){
            return {mp[need] , i};
        }
        mp[arr[i]] = i;

    }
    return {};
 
}
int main(){
    vector<int> arr = {1,3,5,7,9};
    int target = 8;
    vector<int> res = twosum(arr,target);
    for(int x : res){
        cout << x << " ";
    }
    return 0;

}