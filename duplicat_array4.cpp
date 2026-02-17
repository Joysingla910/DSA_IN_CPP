#include<iostream> 
using namespace std;
int remdup(int arr[], int n){
    int i = 0;
    for(int j = 1 ; j < n ; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr[] = { 1,1,2,2,2,2,3,3,3,4,4,4};
    int n = 12;
    cout << remdup(arr, n);
    return 0;
}