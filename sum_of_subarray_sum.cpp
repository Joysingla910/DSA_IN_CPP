#include<bits/stdc++.h>
using namespace std;
vector<int> subarraysum(vector<int> &arr){
int sum = 0 ;
for(int i = 0 ; i < arr.size() ; i++){
    int mini = arr[i];
    for(int j = i ; j < arr.size() ; j++){
        mini = min(mini , arr[j]);
        sum = sum + mini;
    }
}
    return {sum};
}
int main(){
    vector<int> arr = { 3,1,2,4};
    vector<int> res = subarraysum(arr);
    for(int x : res){
        cout << x << " ";
    }
    return 0 ;
}