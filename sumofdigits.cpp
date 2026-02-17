 /*#include<iostream>
using namespace std;
int sumofdigits(int n){
    //base condition
    

    while( n > 0){
    
    int ld = n%10;
    n = n / 10;
    return ld + sumofdigits(n) ;
    }
}
int main (){
    int n = 789;
    cout << sumofdigits(n)<< endl;
    return 0;
}*/
#include<iostream>
using namespace std;
int sumofdigits(int n){
    int sum =0;
    while(n != 0){

        int ld = n %10;
        sum += ld;
        n /= 10;

    }
    return sum;
}
int main (){
    int n = 789;
    cout << sumofdigits(n)<< endl;
    return 0;
}