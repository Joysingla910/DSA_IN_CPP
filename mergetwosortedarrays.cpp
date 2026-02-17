// #include<bits/stdc++.h>   // brute force 
// using namespace std;
// vector<int> mergesorted(vector<int> & arr1 , vector<int>  & arr2 ){
//     vector<int> ans;
//     unordered_map<int,int> mp;
//     for(int i = 0 ; i < arr1.size() ; i++){
//         mp[arr1[i]]++;
//     }
//     for(int i = 0 ; i < arr2.size() ; i++){
//         mp[arr2[i]]++;
//     }
//     for(auto it : mp){
//         while(it.second --){
//             ans.push_back(it.first);
//         }
//     }
//     sort(ans.begin() , ans.end());
//     return ans;

// }
// int main(){
//     vector<int> arr1 = {1,3,5,7};
//     vector<int> arr2 = {2,4,6,8};
//     mergesorted(arr1 , arr2 );
//     vector<int> res = mergesorted(arr1 , arr2);
    
//     for(int x : res){
//         cout << x << " ";
//     }
//     return 0;
// }

//#include<bits/stdc++.h> // better approach 
// using namespace std;
// vector<int> merge(vector<int> &arr1 , vector<int> &arr2){
//     vector<int> ans;
//     int i = 0 , j = 0;
//     while(i < arr1.size() && j < arr2.size() ){
//         if(arr1[i] <= arr2[j]){
//         ans.push_back(arr1[i++]);
//         }
//         else{
//             ans.push_back(arr2[j++]);
//         }
// }
// while(i < arr1.size()){            remaining elements ke liye
//     ans.push_back(arr1[i++]);
// }
// while(j < arr2.size()){
//     ans.push_back(arr2[j++]);
// }
// return ans;
// }
// int main(){
//     vector<int> arr1 = {1,3,5,7};
//     vector<int> arr2 = {2,4,6,8};
//     merge(arr1 , arr2 );
//     vector<int> res = merge(arr1 , arr2);
   
//     for(int x : res){
//         cout << x << " ";
//     }
//     return 0;
// }

