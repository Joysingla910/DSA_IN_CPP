// #include<bits/stdc++.h>   //brute force approach
// using namespace std;
// int majorele(int arr[] , int n){
    
//     for(int i = 0 ; i < n ; i++){
//         int count = 0;
//         for(int j = 0 ; j < n ; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count > n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1,2,3,4,2,2,2,8,5};
//     int n = 9;
//     cout <<  majorele(arr , n) << " ";
//     return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int majorele(vector<int> & arr){
//     unordered_map<int,int> mp;
//     for(int i = 0 ; i < arr.size() ; i++){
//         mp[arr[i]]++;
//     }
//         for(auto it : mp){
//         if(it.second > arr.size()/2){
//             return it.first;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr = { 2,2,3,4,6,7,2,2,2};
//     cout << majorele(arr);
//     return 0 ;
    
// }


// moores voting algorithm


#include<bits/stdc++.h>
using namespace std;
vector<int> majorele(vector<int> & arr){
    int n = arr.size();
    int count = 0;
    int ele;
    for(int i = 0 ; i < n; i++){
        if(count == 0 ){
            count = 1;
            ele = arr[i];
        }
        else if(arr[i] == ele){
            count++;
        }
        else{
            count--;
        }
    }
    count == 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == ele){
            count++;
        }
    }
    if(count > n/2){
        return {ele};
    }
    else{
        return {};
    }

}
int main(){
    vector<int> arr = {1,2,3,3,3,3,4,5};
    vector<int> res = majorele(arr );
    for(int x : res){
        cout << x << " ";
    }
    return 0;
}


