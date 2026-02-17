// #include<bits/stdc++.h>
// using namespace std;
// int search(vector<int> &arr , int target){
//     int n = arr.size();
//     int st = 0 , end = n - 1;
//     while(st <= end){
//         int mid = st + (end - st)/2;
//     if(arr[mid] == target){
//         return mid;
//     } 
//     if(arr[st] <= arr[mid]){   // left sorted
//         if(arr[st] <= target && target <= arr[mid]){
//             end = mid - 1;
//         }
//         else{
//             st = mid + 1;
//         }
//     }
//     else{     // right sorted
//         if(arr[mid] <= target  && target <= arr[end] ){
//             st = mid + 1; 
//         }
//         else{
//             end = mid - 1;
//         }
//     }
// }
// return -1;
// }
// int main(){
//     vector<int> arr = {4,5,6,7,0,1,2,3};
//     int target = 6;
//     cout << search(arr , target);
//     return 0;
// } 


// variety 2 when array contains duplicate as well

#include<bits/stdc++.h>
using namespace std;
bool search(vector<int> &arr , int target ){
    int n = arr.size();
    int low = 0 , high = n - 1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target ){
            return true;
        }
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low = low + 1;
            high = high- 1;
            continue;
        }
        else if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return false;

}
int main(){
    vector<int> arr = {3,1,2,3,3,3,3};
    int target = 3;
    cout << search(arr, target);
    return 0 ;
}