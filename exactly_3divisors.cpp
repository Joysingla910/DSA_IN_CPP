#include<iostream>
using namespace std;
void divisor(int n ){
    for(int i = 1 ; i <= n ; i++){
        int count = 0;
        for(int j=1 ; j<=i ; j ++){
            if(i%j == 0){
                count = count + 1;
            }
        }   
       if(count == 3){
            cout <<  i << "  ";
        }
    }    
}
int main (){
    int n = 100;
    divisor(n);
    return 0;
}