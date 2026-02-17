#include<iostream>
using namespace std;
int sqrt(int n ){
    int i = 1;
    while(i*i<=n){
        i++;
    }
    return i - 1;
}
int main(){
    int n = 21;
    cout << sqrt(n) << endl;
    return 0;
}