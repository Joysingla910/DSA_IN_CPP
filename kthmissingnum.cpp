// #include<bits/stdc++.h>
// using namespace std;
// int missing(vector<int> & arr , int k ){
//     int num = 1;
//     int i = 0;
//     while(k> 0){
//         if(i < arr.size() && arr[i] == num ){
//             i++;
//         }
//         else{
//             k--;
//             if(k == 0 ){
//                 return num;
//             }
//         }
//         num++;
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr= {4,5,8,10};
//     int k = 5;
//     cout << missing(arr , k) << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int missing(vector<int> & arr , int k ){
    int low = 1 ,  high = arr.size() - 1 ;
    while(low<=high){
        int mid = (low+ high)/2;
        int missing = arr[mid] - (mid + 1);
        if(missing < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    } 
    return high + 1 + k;
}
int main(){
    vector<int> arr= {4,5,8,10};
    int k = 5;
    cout << missing(arr , k) << endl;
    return 0;
}
