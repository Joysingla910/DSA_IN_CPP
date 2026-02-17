// normal approach

/*#include<iostream>
using namespace std;

int sqnum(int n){
    int sum = 0;
    for(int i = 1; i <=n ; i++){
        sum = sum + i*i;
    }
    return sum;
}
int main(){
    int n = 4;
    cout<< sqnum(n );
    return 0;
}*/

// alternative approach

#include<iostream>
using namespace std;
int sqnum(int n){
    return n*(n+1)*(2*n+1)/6;
}
int main(){
    int n = 4;
    cout<< sqnum(n);
    return 0;
}