// #include<bits/stdc++.h>  // brute or better approach
// using namespace std;
// int  maxsum(int arr[] , int n ){
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         int sum = 0 ;
//         for(int j = i ; j < n ; j++){
//             sum = sum + arr[j];
//         }
//         maxi = max(sum , maxi);
//     }
//     return maxi;
// }
// int main(){
//     int arr[] = { 1,1,2,3,4,5,6};
//     int n = 7;
//     cout << maxsum(arr, n) << endl;
//     return 0;
// }

#include<bits/stdc++.h> // kadane algorithm
using namespace std;
int maxsum(int arr[] , int n){
    int sum = 0 ; int maxi = INT_MIN;
    for(int i = 0  ; i < n ; i++){
        sum += arr[i];
    }
    if(sum < 0){
        sum = 0;
    }
    if(sum > 0){
        maxi = max(sum, maxi);
    }
    return maxi;
}
int main(){
     int arr[] = { 1,1,2,3,4,5,6};
     int n = 7;
     cout << maxsum(arr, n) << endl;
     return 0;
 }