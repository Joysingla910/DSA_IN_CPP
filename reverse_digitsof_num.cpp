#include<iostream>
using namespace std;
int revdig(int n ){
    int revnum=0;
    while(n>0){
        int ld = n%10;
        
        
        revnum = revnum*10 + ld;
        n = n/10;

    }
    return revnum;

}
int main (){
    int n = 6894;
    cout << revdig(n) << endl;
    return 0;
}