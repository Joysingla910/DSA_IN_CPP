// #include<bits/stdc++.h>
// using namespace std;
// int lower(vector<int> & arr , int x){
//     int n = arr.size();
//     int ans = n;
//     int low = 0 , high = n -1;
//     while(low <= high){
//         int mid = (low + high)/2;
//         if(arr[mid] >= x){
//             ans = mid;
//             high = mid - 1;
//         }
//         else{
//             low = mid + 1;
//         }
//     }
//     return ans; 
// }
// int main(){
//     vector<int> arr = {1,2,3,3,6,7,8};
//     int x = 7;
//     cout << lower(arr , x) << endl;
//     return 0 ;
// }


#include<bits/stdc++.h>
using namespace std;
int upper(vector<int> & arr , int x){
    int n = arr.size();
    int ans = n;
    int low = 0 , high = n -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans; 
}
int main(){
    vector<int> arr = {1,2,3,3,6,7,8};
    int x = 7;
    cout << upper(arr , x) << endl;
    return 0 ;
}