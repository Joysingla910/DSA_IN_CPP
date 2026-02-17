#include<bits/stdc++.h>
using namespace std;
int findmin(vector<int> &arr ){
    int ans = INT_MAX;
    int n = arr.size();
    int low = 0 , high = n - 1 ;
    while(low <= high){
        int mid = (low + high)/2;
        // agar aur optimise karna hai to
        // if(arr[low] < arr[high]){
        //ans = min(ans , arr[low]);
        // }
        if(arr[low] <= arr[mid]){
            ans = min(ans , arr[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans , arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {4,5,6,7,1,2,3};
    cout << findmin(arr);
    return 0;   
}