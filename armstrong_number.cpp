#include<iostream>
using namespace std;
bool armstrong( int n ){
    int dup = n;
    int sum = 0;
    while(n>0){
    int ld = n%10;
    sum = sum + (ld*ld*ld);
    n = n / 10 ;
    }
    if(sum == dup ){
        return true;
    }
    else{
        return false ;
    }
}
int main(){
    int n = 371;
    cout << armstrong(n) << endl;
    return 0;
}
