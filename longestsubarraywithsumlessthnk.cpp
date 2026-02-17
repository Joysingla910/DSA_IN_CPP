// #include<bits/stdc++.h>
// using namespace std;
// int longest(vector<int> & arr,int k){
//     int maxlength = 0;
//     for(int i = 0 ; i < arr.size() ; i++){
//         int sum = 0 ;
//         for(int j = i ; j < arr.size() ; j++ ){
//              sum = sum + arr[j];
//             if(sum <= k){
//                  maxlength = max(maxlength , j -i +1);
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     return  maxlength;
// }
// int main(){
//     vector<int> arr = {2,5,1,7,10};
//     int k = 14;
//     cout<< longest(arr,k) << endl;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int longest(vector<int> & arr,int k){
    int l =0;
    int r =0;
    int maxlen =0;
    int sum = 0;
    while(r < arr.size()){
        sum = sum + arr[r];
    
    while(sum > k){
        sum = sum - arr[l];
        l++;
    }
    maxlen = max(maxlen , r-l+1);
    r++;
}
return maxlen;
}
int main(){
    vector<int> arr = {2,5,1,7,10};
    int k = 14;
    cout<< longest(arr,k) << endl;
    return 0;
}

  