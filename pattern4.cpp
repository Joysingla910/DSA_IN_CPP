#include<iostream>
using namespace std;
void pattern4(int n){
    for(int i = 0 ; i < n ; i++){
        int count = i + 1;
        for(int j = 0 ; j <= i ; j++){
            
            cout << count;
        }
        cout << endl;
    }

}
int main(){
    int n = 6 ;
    pattern4(n);
    return 0 ;
}