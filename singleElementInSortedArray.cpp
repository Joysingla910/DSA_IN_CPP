// #include<bits/stdc++.h>   better approach using hashing
// using namespace std;
// int singleelement(vector<int> &arr){
//     int n = arr.size();
//     unordered_map<int,int> mp;
//     for(int i = 0 ; i < n ; i++){
//         mp[arr[i]]++;
//     }
//     for(auto it : mp){
//         if(it.second == 1){
//             return it.first;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6,7,7 };
//     cout << singleelement(arr) << endl;
//     return 0;

// }


// #include<bits/stdc++.h>  // brute force using linear itteration
// using namespace std;
// int single(vector<int> & arr){
//     int n = arr.size();
//     for(int i = 0 ; i < n ; i++){
//         int count = 0 ;
//         for(int j = 0 ; j < n ; j++){
//             if(arr[j] == arr[i]){
//                 count++;
//             }
//         }
//         if(count == 1 ){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6,7,7};
//     cout<< single(arr) << endl;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;