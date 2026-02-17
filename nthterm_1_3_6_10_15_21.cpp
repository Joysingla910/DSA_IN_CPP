/* #include<iostream>
using namespace std;
int term(int n){
    int ans = 0;
    for(int i = 1;  i<= n ; i++){
        ans = ans + i;
    }
    return ans ;
}
int main (){
    int n = 18;
    cout << term(n) << endl;
    return 0 ;
} */


#include<iostream>
using namespace std;
int term(int n){
    return n*(n+1)/2; 
}
int main (){
    int n = 6;
    cout << term(n) << endl;
    return 0 ;
}
