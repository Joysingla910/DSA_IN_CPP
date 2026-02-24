// #include<bits/stdc++.h>
// using namespace std ;
// vector<int> nge(vector<int> & arr){
//     int n = arr.size();
//     vector<int> ans(n);
//     for(int i = 0 ; i < n ; i++){
//         int nextgreater = -1;
//         for(int j = i+1 ; j < n ; j++){
//             if(arr[j] > arr[i]){
//                 nextgreater = arr[j];
//                 break;
//             }
//         }
//         ans[i] = nextgreater;
//     }
//     return ans;
// }
// int main (){
//     vector<int> arr = {2,5,0,1,8,9,3 };
//     vector<int> res = nge(arr);
//     for(int x : res){
//         cout << x << " ";
//     }
//     return 0;

//}
// optimal sol
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> nge(vector<int> & arr){
//     int n = arr.size();
//     vector<int> ans(n);
//     stack<int> st;
//     for(int i = n-1; i >= 0 ; i--){
//         while(!st.empty() && st.top() <= arr[i]){
//             st.pop();
//         }
//         if(st.empty() ){
//             ans[i] = -1;
//         }
//         else{
//             ans[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr = {4,12,5,3,1,2,5,3,1,2,4,6};
//     vector<int> res = nge(arr);
    
//     for(int x : res){
//         cout << x << " " ;
//     }
//     return 0 ;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// vector<int> nge(vector<int> arr , int N){
//     int n = arr.size();
//     vector<int> great(n);
//     for(int i = 0 ; i < n ; i++){
//         for(int j = i+1 ; j < i+N-1 ; j++){
//             int index = j%N;
//             if(arr[index] > arr[i]){
//                 great[i] = arr[index];
//                 break;
//             }
//         }
//     }
//     return great;
// }
// int main(){
//     vector<int> arr = { 2,10,12,1,11};
//     int N = 5;
//     vector<int> res = nge(arr,N);
//     for(int x : res){
//         cout << x << " ";
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;
    for(int i = 2*n-1 ; i >=0 ; i--) {
        while(!st.empty() && st.top() <= arr[i%n] ){
            st.pop();
        }
        if(i < n){
            ans[i] = st.empty() ? -1 : st.top();
        }
        st.push(arr[i%n]);
    }
    return ans;
}
int main(){
    vector<int> arr = {2,10,12,1,11};
    vector<int> res = nge(arr);
    for(int x : res){
        cout << x << " ";
    }
    return 0;
}