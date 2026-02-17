#include<iostream>
using namespace std;
int closestnumber(int &n , int &m )
{
    int q = n/m;
    int n1 = m*q ;
    int n2 = m*(q+1);
    if (abs(n - n1) < abs(n2 - n) ){
        return n1;
    }
    else {
        return n2;
    }
}
int main(){
    int n = 110;
    int m = 9 ;
    cout << closestnumber(n,m) << endl;
    return 0;
}