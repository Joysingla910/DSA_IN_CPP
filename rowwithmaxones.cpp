// #include<bits/stdc++.h>
// using namespace std ;
// int maxones(vector<vector<int>> &mat , int n , int m ){
//     int maxcount = 0;
//     int row = -1;
//     for(int i = 0 ; i < n ; i++){
//         int count = 0;
//         for(int j = 0 ; j <m ; j++){
//             if(mat[i][j] == 1){
//                 count++;
//             }
//         if(count > maxcount ){
//             maxcount = count;
//             row = i;
//             }
//     }
//     }
//     return row;
// }
// int main(){
//     vector<vector<int>> mat = {{0,0,1,1,1},
//                                {0,0,0,0,0},
//                                {0,1,1,1,1},
//                                {0,0,0,0,0},
//                                {0,1,1,1,1}};  
//     int n = 5;
//     int m = 5;
//     cout << maxones(mat , n , m) << endl;
//     return 0;                           
// }



#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> &arr , int n , int x){
    int low = 0 ; int high = n - 1;
    int ans = n;
    for(int i = 0  ; i < n ; i++){
        int mid = (low+high)/2;
        if(arr[mid] >= x ){
            ans  =  mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans ; 
}
int rowmaxones(vector<vector<int>> & matrix , int n , int m){
    int maxcount = 0;
    int row = -1;
    for(int i = 0 ; i < n ; i++){
        int maxones = m - lowerbound(matrix[i] ,  m , 1);
        if(maxones > maxcount){
            maxcount = maxones;
            row = i ;
        }
    }
    return row;
}
int main(){
    vector<vector<int>> mat = {{0,0,1,1,1},
                               {0,0,0,0,0},
                               {0,1,1,1,1},
                               {0,0,0,0,0},
                               {0,1,1,1,1}};  
    int n = 5;
    int m = 5;
    cout << rowmaxones(mat , n , m) << endl;
    return 0;                         }