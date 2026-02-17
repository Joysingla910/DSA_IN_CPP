#include<bits/stdc++.h>
using namespace std;
int maxones(int a[] , int n){
    int maxi = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 1){
            count = count + 1;
            maxi = max(maxi , count );
            }
            else{
                count = 0;
            }
        }
        return  maxi ;
    }

int main(){
    int a[] = {1 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 1};
    int n = 9;
    cout << maxones( a , n) << endl;
    return 0;

}