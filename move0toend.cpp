#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &m) {
    int j = -1;

    // Step 1: find first zero
    for(int i = 0; i <  m.size(); i++) {
        if(m[i] == 0) {
            j = i;
            break;
        }
    }

    // Agar zero hi nahi hai
    if(j == -1) return;

    // Step 2: swap non-zero with zero
    for(int i = j + 1; i < m.size(); i++) {
        if(m[i] != 0) {
            swap(m[i], m[j]);
            j++;
        }
    }
}
int main(){
    vector<int> m = {1,0,2,3,2,0,0,4,5,1};
    moveZeroes(m);
    for(int x : m){
        cout << x << " ";
    }
}



// TC = o(X) + o(N-X) = o(N); x is no of position travelled to find first zero;
// SC = o(1);