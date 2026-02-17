#include<bits/stdc++.h>
using namespace std;
int sqrt( int n){
    int ans = -1;
    for(int i = 1 ; i* i <= n ; i++){
        ans = i;
    }
    return ans ;
}
int main(){
    int n = 28;
    cout << sqrt(n) ;
    return 0;
}