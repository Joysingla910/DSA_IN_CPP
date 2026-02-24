#include<bits/stdc++.h>
using namespace std;
bool valid(string s){
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[' ){
            st.push(ch);
        }
        else{
            if(st.empty()) return false;
            if(ch == ')' && st.top() != '(') return false;
            if(ch == '}' && st.top() != '{') return false;
            if(ch == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    string s;
    cin >> s;
    if(valid(s)){
        cout<< "valid";
    }
    else{
        cout << "invalid";
    }
    return 0;
}