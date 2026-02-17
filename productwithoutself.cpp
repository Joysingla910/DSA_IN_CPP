#include<bits/stdc++.h>
using namespace std;
vector<int> product(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    for(int i = 0 ; i < n ; i++){
        int product = 1;
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                product = product * nums[j];
            }
        }
        ans.push_back(product);
    }
}
int main(){
    vector<int> nums = {1,2,3,4};
    product(nums);
    vector<int> res = product(nums);
    for(int x : res){
        cout << x << " ";

    }
    return 0;
}