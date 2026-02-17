// #include<bits/stdc++.h>
// using namespace std;
// int major(int arr[] , int n){
     
//     for(int i = 0 ; i < n ; i++){
//         int count = 0;
//         for(int j = 0 ; j < n ; j++){
//             if(arr[j] =arr[i]){
//                 count++;
//             }
//             if(count > n/3){
//                 return arr[i];
//             }
//         }  
//         return -1; 
//     }
    
// }
// int main(){
//     int arr[] = { 1,1,1,2,2,3,3,3};
//     int n = 8;
//     cout << major(arr, n) << endl;
//     return 0 ;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> major(int arr[] , int  n){
//     unordered_map<int,int> mp;
//     vector<int> ans;
//     for(int i = 0 ; i < n ; i++){
//         mp[arr[i]]++;
//     }
//     for(auto it: mp){
//         if(it.second > n/3){
//             ans.push_back(it.first);
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[] = { 1,1,1,2,2,3,3,3};
//     int n = 8;
//     vector<int> result = major(arr, n);
//     for(int x : result){
//         cout << x << " ";
//     }
//     return 0 ;
// }

