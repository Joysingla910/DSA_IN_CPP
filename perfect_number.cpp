#include<iostream> 
using namespace std;
int perf(int n ){
    int sum = 0;
    for(int i = 1 ; i < n ; i++){
        if( n%i == 0){
            sum = sum + i;
        }
    }
    if (sum == n && n != 0){
        return true;
    }
    else{
        return false;
    }
    
}
int main (){
    int n =1000;
    cout << perf(n) << endl;
    return 0;
}

