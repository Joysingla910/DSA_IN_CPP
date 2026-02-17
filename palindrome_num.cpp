#include<iostream>
using namespace std;
bool palindrome(int n){
    int dup = n;
    int revnum = 0;
    while(n>0){
        int ld = n%10;
        revnum = revnum*10 + ld;
        n = n / 10;
    }
    if(revnum == dup){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int n = 133 ;
    cout << palindrome(n) << endl;
    return 0 ;
}