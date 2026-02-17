/* #include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n ;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main (){
    int n = 21;
    cout << fibonacci(n) << endl;
    return 0 ;
} */


#include<iostream>
using namespace std;
int fibonacci(int n){
    int current = 0 ;
    int prev1 = 1;
    int prev2 = 0;
    for(int i = 2 ; i<=n ; i++){
        current = prev1 + prev2;
        prev2 = prev1 ;
        prev1 = current;
    }
    return current;
}
int main (){
    int n = 21;
    cout << fibonacci(n) << endl;
    return 0 ;
}