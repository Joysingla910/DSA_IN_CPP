// #include<bits/stdc++.h>
// using namespace std;
// vector<int> search(vector<vector<int>> & matrix , int n , int m, int target){
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < m ; j++){
//             if(matrix[i][j] == target){
//                 return {i , j};
//             }
//         }
//     }
//     return {-1 , -1};
// }
// int main(){
//     vector<vector<int>> matrix = {{12,10,11,31,51},
//                                   {14,90,80,60,50},
//                                   {0,15,18,19,13},
//                                   {40,300,20,67,54},
//                                   {44,37,89,64,87}};  
//     int n = 5;
//     int m = 5;
//     int target = 19;
//     vector<int> res = search(matrix , n , m , target);
//     for(auto x : res){
//         cout << x << " ";
//     }
//     return 0;                         
// }



// #include<bits/stdc++.h>
// using namespace std;
// vector<int> search(vector<vector<int>> & matrix , int n , int m, int target){
    
//     for(int i = 0 ; i < n ; i++){
//         int low = 0 ; int high = m - 1 ;
//         while(low <= high){
//             int mid = ( low + high )/2;
//             if(matrix[i][mid] == target){
//                 return {i, mid};
//             }
//             else if(matrix[i][mid] < target){
//                 low = mid+ 1;
//             }
//             else{
//                 high = mid - 1;
//         }
//         }
//     }
//     return {-1,-1};
// }    
// int main(){
//     vector<vector<int>> matrix = {{12,13,14,15,16},
//                                   {17,18,19,20,21},
//                                   {22,23,24,25,26},
//                                   {27,28,29,30,31},
//                                   {32,33,34,35,36}};  
//     int n = 5;
//     int m = 5;
//     int target = 19;
//     vector<int> res = search(matrix , n , m , target);
//     for(auto x : res){
//         cout << x << " ";
//     }
//     return 0;                         
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> search(vector<vector<int>> &mat , int n , int m , int target){
//     int low = 0 ;
//     int high = (n*m)-1;
//     while(low<= high){
//         int mid = ( low + high )/2;
//         int row = mid / m;
//         int col = mid % m;
//         if(mat[row][col]== target){
//             return { row , col };
//         }
//         else if(mat[row][col] > target){
//             high = mid - 1;
//         }
//         else{
//             low = mid + 1;
//         }


//        }   
//        return { -1 , -1};
// }
// int main(){
//     vector<vector<int>> matrix = {{12,13,14,15,16},
//                                   {17,18,19,20,21},
//                                   {22,23,24,25,26},
//                                   {27,28,29,30,31},
//                                   {32,33,34,35,36}};  
//     int n = 5;
//     int m = 5;
//     int target = 19;
//     vector<int> res = search(matrix , n , m , target);
//     for(auto x : res){
//         cout << x << " ";
//     }
//     return 0;                         
// }


#include<bits/stdc++.h>
using namespace std;
vector<int> search(vector<vector<int>> & matrix , int n , int m , int target){
    
    int row = 0;
    int col = m -1;
    while(row < n && col >= 0){
        if(matrix[row][col] == target ){
            return {row , col};
        }
        else if(matrix[row][col] > target){
            col--;
        }
        else{
            row++;
        }
    }
    return {-1,-1};
}
int main(){
    vector<vector<int>> matrix = { {1,4,7,11,15},
                                {2,5,8,12,19},
                                {3,6,9,16,23},
                                {10,13,14,17,24},
                                {18,21,23,26,30}};
    int target = 17;
    int row = 5;
    int col = 5;
    vector<int> res = search(matrix , row , col, target);
    for(auto x : res){
        cout << x << " ";
    }                    
    return 0;  
}










