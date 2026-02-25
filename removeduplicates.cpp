#include<bits/stdc++.h>
using namespace std;
vector<int> removedup(vector<int> & arr){
set<int> st;
for(int i = 0 ; i < arr.size() ;  i++){
    st.insert(arr[i]);
    
}
int index = 0;
for(auto it : st){
    arr[index] = it;
    index++;
}

return {index};
}
int main(){
    vector<int > arr = {1,1,2,2,2,3,3,4,4,4,5};
    vector<int> res = removedup(arr);
    for(int x : res){
        cout << x << " ";
    }
    
    return 0;
}