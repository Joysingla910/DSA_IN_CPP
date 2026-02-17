#include<iostream>
using namespace std;
void pattern3(int n ){
    for(int i = 0 ; i < n ; i++){
        int count = 0 ;
        for(int j = 0 ; j<= i ; j++){
            count = count + 1;
            cout << count;
        }
        cout << endl;
    }
}
int main(){
    int n = 6;
    pattern3(n);
    return 0;
}