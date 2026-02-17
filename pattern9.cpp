#include<iostream> 
using namespace std;
void pattern9(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j < i ; j++){
            if((i+j)%2==0){
                cout << "0" ;
            }
            else{
                cout << "1" ;
            }
        }
        cout << endl;
    }
}
int main(){
    int n = 8;
    pattern9(n);
    return 0 ;
}