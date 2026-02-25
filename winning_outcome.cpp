#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>>  wining(vector<vector<int>> &matrix , int n ,int m){
      vector<int> rowsum(n,0);
      vector<int> colsum(m,0);
    for(int i = 0 ; i <n ; i++){
        for(int j = 0 ; j < m ; j++){
            rowsum[i] +=  matrix[i][j];
            colsum[j] +=  matrix[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(colsum[j] > rowsum[i]){
                cout << matrix[i][j] << " " << "is winning element at" << i << "and" << j << endl;
            }
        }
    }
}
int main(){
    vector<vector<int>> matrix ={{5,7,8,4},
                                 {9,5,3,2},
                                 {1,6,6,4},
                                 {9,5,7,3}};
    int n = 4 ;
    int m = 4;
    wining(matrix,n,m);
    return 0;
}