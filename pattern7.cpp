/* #include<iostream>
using namespace std;
void pattern7(int n ){
    for(int i=0 ; i <n ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout << " ";
            for(int j = 0 ; j <  2*i+1 ; j++ ){
                cout << " * ";
                for(int j  = 0 ; j < n - i - 1 ; j++ ){
                    cout << "  ";
                }
            
            }
        
        }
        cout << endl;
    }

}
int main(){
    int n = 5;
    pattern7(n);
    return 0 ;
} */



#include <bits/stdc++.h>
using namespace std;

    // Function to print Pattern 7
    void pattern7(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            
            // Print leading spaces (N - i - 1 spaces)
            for (int j = 0; j < N - i ; j++) {
                cout << " + ";
            }

            // Print stars (2*i + 1 stars)
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << " ";
            }

            // Print trailing spaces (optional, same count as leading spaces)
            for (int j = 0; j < N - i - 1; j++) {
                cout << " + ";
            }

            // Move to next row
            cout << endl;
        }
    }


int main() {

    int N = 5;
    pattern7(N);
    return 0;
}