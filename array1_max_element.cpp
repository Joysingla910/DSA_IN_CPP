#include<bits/stdc++.h>
using namespace std;
int maxarr(int n ){
    int arr[5] = {2,4,6,7,8};
    int max = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
}
int main (){
    int n = 5;
    maxarr(n);
    return 0;
}

// time complexity o(n) 