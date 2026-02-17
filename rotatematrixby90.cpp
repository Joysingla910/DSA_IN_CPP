#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> rotatematrix(vector<vector<int>> &matrix , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            swap(matrix[i][j] , matrix[j][i]);  //transpose
        }
    }
    for(int i = 0 ; i < n ; i++){
        reverse(matrix[i].begin() , matrix[i].end());   // row reversal
    }
    return matrix;
}
int main() {

    int n = 4;

    vector<vector<int>> matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };

    rotatematrix(matrix, n);

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
