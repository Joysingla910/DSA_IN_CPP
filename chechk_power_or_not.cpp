#include<iostream>
using namespace std;
bool checkpower(int a , int b){
    while (b>1){
        if( b%a != 0 ){
            return false;
        }
        b = b/a;
        return true;
        
    }
    }
int main(){
    int a = 8 , b = 64;
    cout<< checkpower(a,b) << endl;
    return 0;
}