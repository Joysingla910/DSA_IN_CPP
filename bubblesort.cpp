#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[] , int n ){
    for(int i = n-1 ; i >= 1; i--){
        int didswap = 0;
        for(int j = 0 ; j < i ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        if( didswap == 0){
            break;
        }
    }

}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    bubblesort(arr , n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;

}
// time complexity = o(n)
// otherwise without didswap it was o(n^2);