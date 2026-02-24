#include<bits/stdc++.h>
using namespace std ;
class minstack{
    public:
    stack<pair<int,int>> st;
    void push(int val){
        if(st.empty() ){
            st.push({val , val });
        }
        else{
            st.push({val , min(val , st.top().second)});
        }
    }
    void pop(){
        if(!st.empty()){
        st.pop();
     }
   }
   int top(){
        return st.top().first;
   }
   int getmin(){
        return st.top().second;
   }
};
int main() {
    minstack ms;   // object bana liya
    ms.push(5);
    ms.push(3);
    ms.push(7);
    ms.push(2);
    cout << "Top element: " << ms.top() << endl;
    cout << "Minimum element: " << ms.getmin() << endl;
    ms.pop();
    cout << endl;

    cout << "After pop:" << endl;
    cout << endl;
    cout << "Top element: " << ms.top() << endl;
    cout << "Minimum element: " << ms.getmin() << endl;
    return 0;
}