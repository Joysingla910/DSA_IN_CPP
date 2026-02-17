#include<iostream>
using namespace std;
int nthtermofap(int a1 , int a2 , int n){
    int nthterm = a1;
    int d = a2-a1;
    for(int i = a1 ; i <= n ; i++ ){
        nthterm += d;
    }
    return nthterm ;
}
int main(){
    int a1 = 2;
    int a2 = 4;
    int n = 10;
    cout << nthtermofap(a1,a2,n) << endl;
    return 0;
} 

/* #include<iostream>
using namespace std;

int nthterm(int a1 , int a2, int n){
    int d = a2 - a1;
    int  ans = a1 + (n-1)*d;
    return ans;
}
int main(){
    int a1 = 2;
    int a2 = 4;
    int n = 10;
    cout << nthterm(a1,a2, n );
    return 0;
} */