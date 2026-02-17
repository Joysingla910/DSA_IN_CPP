// // everything is smaller on right side    {{{{ brute force }}}}
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> leader(vector<int> &arr){
//     vector<int> ans;
    
//     int n = arr.size();
//     for(int i = 0 ; i < n ; i++){
//         int leader = true;
//         for(int j = i + 1 ; j < n ; j++){
//             if(arr[j] > arr[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader  == true){
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr = {10,22,12,3,0,6};
//     vector<int> res = leader(arr);
//     for(int x : res){

//         cout << x << " ";
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// vector<int> leader( vector<int> & arr){
//     vector<int> ans;
//     int n = arr.size();
//     int maxi = INT_MIN;
//     for(int i = n -1 ; i >=0 ; i--){
//         if(arr[i] > maxi){
//             ans.push_back(arr[i]);
//         }
//         maxi = max(maxi , arr[i]);
       
//     }
//     reverse(ans.begin() , ans.end());
   
//     return {ans};

    
// }
// int main(){
//     vector<int> arr = {10,22,12,3,0,6};
//     leader(arr);
//     vector<int> res = leader(arr);
//     for(int x : res){
//         cout << x << " ";
//     }
//     return 0;
// }