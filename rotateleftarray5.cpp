#include<iostream>
using namespace std;
int rotate(int arr[], int n){
    int temp = arr[0];
    for(int i=1 ; i<n ; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main(){
    int arr[] = {2,3,5,7,8};
    int n = 5;
    rotate(arr , n );
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}