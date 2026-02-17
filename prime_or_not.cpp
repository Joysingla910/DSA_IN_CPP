#include<iostream> 
using namespace std;
int isprime(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count += 1;
        }
    }
    if ( count == 2){
        return true;
    }
    else {
        return false;
    }
}
int main (){
    int n = 10;
    cout<< isprime(n);
    return 0;
}