#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "joysingla";
    stack<char> st;
    for(int i = 0 ; i < str.size() ; i++){
        st.push(str[i]);
    }
    vector<char> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    for(int i = 0 ; i < ans.size() ; i ++){
        cout << ans[i] << " ";
    }
    return 0 ;
}