// #include<bits/stdc++.h>      brute force
// using namespace std;
// vector<int> median(vector<int> &arr1 , vector<int> &arr2){
//     int n1 = arr1.size() ; int n2 = arr2.size();
//     vector<int> ans;
//     int i = 0 ; int j = 0;
//     while(i < n1 && j < n2){
//         if(arr1[i] <= arr2[j]){
//             ans.push_back(arr1[i++]);
//         }
//         else{
//             ans.push_back(arr2[j++]);
//         }
//     }
//     while(i < n1){
//         ans.push_back(arr1[i++]);
//     }
//     while(j < n2){
//         ans.push_back(arr2[j++]);
//     }
//     int n = (n1 + n2);
//     if(n%2 == 1){              //odd
//         return {ans[n/2]};
//     }
//     else{                       //even
//         return {(ans[n/2] + ans[n/2 - 1]) / 2};
//     }

// }
// int main(){
//     vector<int> arr1 = {1,3,5,7};
//     vector<int> arr2 = {2,4,6,8};
//     vector<int> res = median(arr1 , arr2);
//     for(auto x: res){
//         cout << x << " ";

//     }
//     return 0 ;
// }



// better aproach

