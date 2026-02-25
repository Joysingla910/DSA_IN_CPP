#include<bits/stdc++.h>
using namespace std;
vector<int> asteroid(vector<int> & arr){
    stack<int> st;
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] > 0){
            st.push(arr[i]);
        }
        else{
            while(!st.empty() && st.top() > 0 && st.top() < abs(arr[i])){
                st.pop();
            }
            if(!st.empty() && st.top() == abs(arr[i])){
                st.pop();
            }
            else if(st.empty() || st.top() < 0 ){
                st.push(arr[i]);
            }
        }
    }
    vector<int> res(st.size());
    for(int i = st.size() -1 ; i>=0 ;i--){
        res[i]= st.top();
        st.pop();
    }
    return res;

}
int main(){
    vector<int> arr = {4,7,1,1,2,-3,-7,17,15,-18,-19};
    vector<int> res = asteroid(arr);
    for(int x : res){
        cout << x << " ";
    }
    return 0;
}