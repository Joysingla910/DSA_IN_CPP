#include<bits/stdc++.h>
using namespace std;
vector<int> nse(vector<int> &arr){
    int n = arr.size();
    vector<int> nextsmallest(n);
    stack<int> st;
    for(int i = 0 ; i < n ; i ++ ){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        if(st.empty()){
            nextsmallest[i] =  -1;
        }
        else{
            nextsmallest[i] = st.top();
        }
        st.push(arr[i]);
    }
    return nextsmallest;
}
int main (){
    vector<int> arr = { 5,7,9,6,7,4,5,1,3,7};
    vector<int> res = nse(arr);
    for(int x : res){
        cout << x << " ";
    }
    return 0;
}