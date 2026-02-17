#include<iostream>  // brute force approach
using namespace std;
int rotation(int arr[], int n ){
    for(int i = 0 ; i < n ; i++){
        if(i==0){
            if(arr[i] != arr[i+1]){
                return arr[i];
            }
        }
        else if(i == n -1 ){
            if(arr[i] != arr[n-1]){
                return arr[i];
            }
        }
        else{
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = 11;
    cout << rotation(arr , n);
    return 0;
}







































































