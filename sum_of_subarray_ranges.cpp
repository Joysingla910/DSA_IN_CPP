#include<bits/stdc++.h>                             //  {1,4,3,2}
using namespace std;
int subarrayrange(vector<int> &arr){
    int sum = 0 ;
    for(int i = 0 ; i < arr.size() ; i++){
        int largest = arr[i] , smallest = arr[i];
        for(int j = i+1 ; j < arr.size() ; j++){
            largest = max(largest , arr[j]);
            smallest = min(smallest , arr[j]);
            sum = sum + (largest - smallest);
        }
    }
    return sum;
}
int main(){
    vector<int> arr = { 1,4,3,2};
    cout<< subarrayrange(arr) << endl;
    
    return 0;
}