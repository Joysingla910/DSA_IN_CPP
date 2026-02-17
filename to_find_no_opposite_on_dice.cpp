#include<iostream>
using namespace std;

int oppnum(int n){
    int ans ;
    if( n == 1 ){
        return  6;
    }
    else if (n == 2)
    {
        return  5;
    }
    else if (n == 3)
    {
        return  4;
    }
    else if (n == 4)
    {
        return  3;
    }
    else if (n == 5)
    {
        return  2;
    }
    else 
    {
        return  1; // n == 6
    }    
}
int main (){
    int n = 2;
    cout<< oppnum(n);
    return 0;
} 

/* #include<iostream>
using namespace std;

int oppnum(int n){
    return 7 - n;
}
int main (){
    int n = 3;
    cout<< oppnum(n);
    return 0;
} */