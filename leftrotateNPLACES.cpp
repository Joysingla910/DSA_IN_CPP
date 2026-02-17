#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int leftrotate(int arr[] , int n , int d){

    reverse(arr , arr+d);
    reverse(arr + d , arr + n);
    reverse(arr , arr + n);
}
int main(){
    int arr[] = { 2,3,4,5,6,7,8};
    int n = 7;
    int d = 3;
    leftrotate(arr,n, d);
    for(int i = 0 ; i <n ;  i++){
        cout << arr[i] << " ";
    }
    return 0;
}