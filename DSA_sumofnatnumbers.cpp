//normal approach

/* #include<iostream>
using namespace std;

int sum(int n){
    int sum1 = 0;
    
    for(int i = 1 ; i <=n ; i++){
        sum1 = sum1 + i;
    }
    return sum1 ;
}
int main(){
    int n = 4;
    cout<< sum(n) << endl;
    return 0;
} */


// recursive approach

/*#include<iostream>
using namespace std;

int sum(int n ){
    if ( n == 1){
        return 1;

    }
    else{
        return n + sum(n-1);
    }
}
int main (){
    int n = 8;
    cout << sum(n);
    return 0;
}*/

// formula based approach

#include<iostream>
using namespace std;

int sum(int n){
    return n*(n+1)/2;
}
int main(){
    int n=11;
    cout<< sum(n);
    return 0;
}
