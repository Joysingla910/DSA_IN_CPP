/*#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[], int n ){
    int largest = arr[0];
    int secondlargest = -1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i]> largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if( arr[i] > secondlargest && arr[i] < largest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}
int main(){
    int arr[] = { 1 , 3 , 5, 7 , 9};
    int n = 5;
    cout << secondlargest(arr , n );
    return 0;
} */

// time complexity o(n)



/*#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[] , int n ){
    int smallest = arr[0];
    for(int i = 1 ; i<n ; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main(){
    int arr[] = {9,4,2,6,7};
    int n = 5;
    cout << smallest(arr, n);
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int ssmallest(int arr[] , int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i = 1 ; i< n ; i++ ){
        if(arr[i] < smallest ){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int arr[] = { 2,3, 5, 6 , 8};
    int n = 5;
    cout << ssmallest(arr, n);
    return 0;
}