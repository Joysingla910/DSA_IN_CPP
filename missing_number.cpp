// #include<iostream>     // brute force approach 
// using namespace std;
// int missingnum( int arr[], int n ){
    
//     for(int i = 1 ; i <= n ; i++){
//         int flag = 0;
//         for(int j = 0 ; j < n - 1 ; j++){
//             if(arr[j] == i){
//                 flag = 1;
//                 break; 
//             }
//         }
//         if(flag == 0){
//             return i;
//         }
//     }
//     return -1;

// }
// int main(){
//     int arr[] = {1,2,4,5};
//     int n = 5;
//     cout << missingnum(arr , n) << endl;
//     return 0;
// }


// using sum

// #include<iostream>
// using namespace std;
// int missingnum(int a[] , int n){
//     int sum = n*(n+1)/2;
//     int s2 = 0;
//     for(int i = 0 ; i < n - 1 ; i++){
        
//         s2 = s2 + a[i];
        
//     }
//     return  sum - s2 ;
    
// }
// int main(){
//     int a[] = { 1 , 2 , 4 , 5};
//     int n = 5 ;
//     cout << missingnum(a , n) << endl;
//     return 0;
// }



// using XOR

#include<iostream>
using namespace std ;
int missnum(int a[] , int n ){
    int xor1 = 0;
    for(int i = 1 ; i <= n ; i++){
        xor1 = xor1^i;
    }
    int xor2 = 0;
    for(int i = 0 ; i < n-1 ; i++){
        xor2 = xor2^a[i];
    }
    return xor1^xor2;
}
int main(){
    int a[] = { 1,2,4,5};
    int n = 5;
    cout<< missnum(a ,  n) << endl;
    return 0;
} 