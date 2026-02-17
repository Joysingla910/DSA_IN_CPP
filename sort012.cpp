// #include<bits/stdc++.h>          // brute force
// using namespace std ;
// vector<int> sort012(vector<int> &arr){
//     sort(arr.begin() , arr.end());
//     for(int i=0 ; i < arr.size() ; i++){
//         cout << arr[i] << "  ";
//     }
// }
// int main  (){
//     vector<int> arr = {0,1,2,0,0,0,1,2,2,2,1,1};
//     sort012(arr);
//     return 0;
// 
 
// better method

// #include<bits/stdc++.h>     
// using namespace std ;
// vector<int> sort012(vector<int> &arr ){
//     int c0 = 0 , c1 = 0 , c2 = 0 ;
//     for(int i = 0 ; i <arr.size() ; i++ ){
//         if(arr[i] == 0){
//             c0++;
//         }
//         else if(arr[i] == 1){
//             c1++;
//         }
//         else{
//             c2++;
//         }
//     }
//     for(int i = 0 ; i < c0 ; i++){
//         arr[i] = {0};
//     }
//     for(int i = c0 ;  i < c0 + c1 ; i++){
//         arr[i] = {1};
//     }
//     for(int i = c0 + c1 ; i < arr.size() ; i++){
//         arr[i] = {2};
//     }
//     for(int i = 0 ; i<arr.size() ; i++){
//         cout << arr[i] << " ";
//     }
//     return arr;
    
// }
// int main(){
//     vector<int> arr = {0,1,2,1,2,1,2,0,0,1,0,0,0,0,1,2};
//     sort012(arr);
//     return 0;
// }

// dutch national flag algorithm
#include<iostream>
using namespace std;
int sort012(int arr[] , int n){
    int mid = 0 ,   low = 0 , high = n - 1;
    // 0 - 0 to low-1 | 1 - low to mid - 1 | 2 - high + 1 to n   
    while(mid <= high){
    if(arr[mid] == 0 ){
        swap(arr[mid], arr[low]);
        mid++;
        low++;
    }
    else if(arr[mid] == 1){
        mid++;
    }
    else{
        swap(arr[mid] , arr[high]);
        high--;
    }
}
}
int main(){
    int arr[] = { 0,0,2,2,2,1};
    int n = 6;
    sort012(arr , n);
    for(int i = 0 ; i < n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
