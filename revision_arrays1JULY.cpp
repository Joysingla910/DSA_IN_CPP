// #include<bits/stdc++.h>
// using namespace std;
// int largest(vector<int> &arr){
//     int biggest = arr[0];
//     for(int i = 0 ; i < arr.size() ; i++){
//         if(arr[i] > biggest){
//             biggest = arr[i];
//         }
//     }

//     return biggest;
// }
// int main(){
//     vector<int> arr = {12,23,43,56,11,9};
//     cout << largest(arr) << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int largest(int n ,int arr[]){
//     sort(arr , arr + n);
//     return arr[n-1];
// }
// int main(){
    
//     int arr[] = {12,13,21,34,1,134};
//     int n = 6;
//     cout << largest(n , arr) ;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int seclargest(int n , int arr[]){
//     int largest = arr[0];
//     int secondlargest = -1;  // non negative number 
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] > largest){
//             secondlargest = largest;
//             largest = arr[i];   
//         }
//     }
//     return secondlargest;
// }
// int main(){
//     int n = 7 ;
//     int arr[]  = { 12,23,43,1,123,456,67};
//     cout << seclargest(n , arr) << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool  sorted(vector<int> &arr){
//     int n = arr.size();
//     for(int i = 0 ; i < n-1 ; i++){
//         if(arr[i+i] < arr[i]){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }
// int main(){
//     vector<int> arr ={12,23,34,56,66};
//     cout << boolalpha << sorted(arr) << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> remdup(vector<int> &arr){
//     for(int i = 0 ; i < arr.size() ; i++){
        
//     }
// }   //                                     [1,2,3,4,5]
//                                            [5,1,2,3,4]                                             
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rotate(vector<int> &arr){
//     int n = arr.size();
//     int  temp = arr[n-1];
//     for(int i = n-1 ; i > 0 ; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;

//     return arr;
// }
// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     vector<int> res = rotate(arr);
//     for(auto it : res){
//         cout << it << " " ;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rotate(vector<int> &arr){
//     int n = arr.size();
//     int  temp = arr[0];
//     for(int i = 1 ; i < n ; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;

//     return arr;
// }
// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     vector<int> res = rotate(arr);
//     for(auto it : res){
//         cout << it << " " ;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> zero(vector<int> &arr){
//     vector<int> num;
//     for(int i = 0 ; i < arr.size() ; i++){
//         if(arr[i] != 0 ){
//             num.push_back(arr[i]);
//         }
//     }
//     for(int i = 0 ; i < num.size() ; i++){
//         arr[i]=num[i];
//     }
//     for(int i = num.size() ; i < arr.size() ; i++){
//         arr[i] = 0;
//     }
//     return arr;
// }
// int main(){
//     vector<int> arr = {1,2,0,3,0,0,5,6,0,8};
//     vector<int> res = zero(arr);
//     for(auto x : res){
//         cout << x << " ";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// vector<int> zero(vector<int> &arr){
//     int n = arr.size();
//     int j = -1;
//     for(int i = 0 ; i < n ; i++ ){
//         if(arr[i] == 0){
//             j = i;
//             break;
//         }
//     }
//     for(int i = j+1 ; i < n ; i++){
//         if(arr[i] != 0){
//             swap(arr[i] , arr[j]);
//             j++;
//         }
//     }
//     return arr;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> bfs(int node ,int n , vector<int> adj[]){
//     vector<int> visited(n , 0);
//     queue<int> q;
//     visited[node] = 1;
//     q.push(node);
//     vector<int> bfsarr;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop(); 
//         bfsarr.push_back(temp);
//         for(auto it: adj[temp]){
//         if(!visited[it]){
//             visited[it] = 1;
//             q.push(it);
//         }
//     }
//     }
//     return bfsarr;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void dfsfun(int node , vector<int> adj[] , vector<int> &visited , vector<int> &ans){
//     visited[node] = 1;
//     ans.push_back(node);
//     for(auto it : adj[node]){
//         if(!visited[node]){
//             dfs(it , adj , visited , ans);
//         }
        
//     }
// }
// vector<int> dfs(int n , vector<int> adj[]){
//     vector<int> visited(n,0);
//     vector<int> ans;
//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(i, adj , visited , ans);
//         }
//     }
//     return ans;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int node , vector<int> adj[] , vector<int> &visited , stack<int> st){
//     visited[node] = 1;
//     for(auto it : adj[node]){
//         if(!visited[it]){
//             dfs(it , adj , visited , st);
//         }
//     }
//     st.push(node);
// }
// vector<int> topo(int n  , vector<int> adj[] ){
//     vector<int> visited(n,0);
//     stack<int> st;
//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(i , adj , visited , st);
//         }
//     }

//     vector<int> topolog;
//     while(!st.empty()){
//         int temp = st.top();
//         st.pop();
//         topolog.push_back(temp);
//     }
//     return topolog;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> topobfs(int n , vector<int>adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }
//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topo;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topo.push_back(temp);
//         for(auto it : adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     return topo;
// }


// #include<bits/stdc++.h>
// using namespace std;
// bool detect(int n , vector<int>adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }
//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topo;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topo.push_back(temp);
//         for(auto it : adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     if(topo.size() == n){
//         return false;
//     } 
//     return true;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool detect(int n , vector<int>adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[i]++;
//         }
//     }
//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topo;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topo.push_back(temp);
//         for(auto it : adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     if(topo.size() == n){
//         return false;
//     } 
//     return true;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> zero(vector<int> &arr){
//     int n = arr.size();
//     int j = -1;
//     for(int i = 0 ; i < n ;  i++){
//         if(arr[i] == 0){
//             j = i;
//             break;
//         }
//     }
//     if(j == - 1){
//         return arr;
//     }
//     for(int i = j + 1 ; i < n ; i++){
//         if(arr[i] != 0){
//             swap(arr[i] , arr[j]);
//             j++;
//         }
//     }
//     return arr;
    
// }
// int main(){
//     vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
//     vector<int> res = zero(arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> zero(vector<int> &arr){
//     int n = arr.size();
//     vector<int> temp;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }
//     while(temp.size() < n){
//         temp.push_back(0);
//     }
//     for(int i = 0 ; i < n ; i++){
//         arr[i] = temp[i];
//     }

//     return arr;
// }
// int main(){
//     vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
//     vector<int> res = zero(arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> bfs(int node , int n , vector<int> adj[]){
//     vector<int> visited(n , 0);
//     queue<int> q;
//     visited[node] = 1;
//     q.push(node);
//     vector<int> ans;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         ans.push_back(temp);

//         for(auto it : adj[temp]){
//             if(!visited[it]){
//                 visited[it] = 1;
//                 q.push(it);
//             }
//         }
//     }

//     return ans;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int node , int n , vector<int> adj[] , vector<int> &visited , vector<int> &ans){
//     visited[node] = 1;
//     ans.push_back(node);
//     for(auto it : adj[node]){
//         if(!visited[it]){
//             dfs(it , n ,adj , visited , ans);
//         }
//     }
// }
// vector<int> dfsorder(int n , vector<int> adj[]){
//     vector<int> visited(n , 0);
//     vector<int> ans;
//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(i ,n, adj ,visited , ans);
//         }
//     }
//     return ans;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int node , int n , vector<int> adj[] , vector<int> &visited , stack<int> st){
//     visited[node] = 1;
//     for(auto it : adj[node]){
//         if(!visited[it]){
//             dfs(it , n , adj , visited , st);
//         }
//     }
//     st.push(node);
// }
// vector<int> topo(int n , vector<int> adj[]){
//     vector<int> visited(n , 0);
//     stack<int> st;
//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(i , n , adj , visited , st);
//         }
//     }

//     vector<int> topolog;
//     while(!st.empty()){
//         int temp = st.top();
//         st.pop();
//         topolog.push_back(temp);
//     }
//     return topolog;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> topo(int n , vector<int> adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topolog;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topolog.push_back(temp);


//         for(auto it :adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return topolog;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> topo(int n , vector<int> adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topolog;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topolog.push_back(temp);


//         for(auto it :adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return topolog;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> topo(int n , vector<int> adj[]){
//     vector<int> adjRev[n];
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             adjRev[it].push_back(i);
//             indegree[i]++;
//         }
//     }

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topolog;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topolog.push_back(temp);


//         for(auto it :adjRev[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return topolog;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> topo(int n , vector<int> adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topolog;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topolog.push_back(temp);


//         for(auto it :adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return topolog;
// }

// string alien(string dict[] , int n , int k){
//     vector<int> adj[k];
//     for(int i = 0 ; i < n-1 ; i++){
//         string s1 = dict[i];
//         string s2 = dict[i+1];
//         int len = min(s1.size() , s2.size());
//         for(int ptr = 0 ; ptr < len ; ptr++){
//             if(s1[ptr] != s2[ptr]){
//                 adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
//                 break;
//             }
//         }
//     }
//     vector<int> topo = topo(n , adj);
//     string ans = " ";
//     for(auto it : topo){
//         ans = ans + char(it +'a');
//     }
//     return ans;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int missing(int n , vector<int> &arr){
//     int sum = n*(n+1)/2;
//     int sumofarr = 0;
//     for(int i = 0 ; i < arr.size() ; i++){
//         sumofarr = sumofarr + arr[i];
//     }
//     return sum - sumofarr;
// }
// int main(){
//     int n = 5;
//     vector<int> arr = {1,2,4,5};
//     cout << missing(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int missing(int n , vector<int> &arr){
//     for(int i = 1 ; i <= n ; i++){
//         bool found = false;
//         for(int j = 0 ; j < arr.size() ; j++){
//             if(arr[j]== i){
//                 found = true;
//                 break;
//             }
//         }
//         if(found == false){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n = 5;
//     vector<int> arr = {1,2,4,5};
//     cout << missing(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int missing(int n , vector<int> &arr){
//     vector<int> hash(n+1,0);
//     for(int i = 0 ; i < arr.size(); i++){
//         hash[arr[i]] = 1;
//     }
//     for(int i = 1 ; i <= n ; i++){
//         if(hash[i] != 1){
//             return i;
//         }
//     }
//     return  -1;
// }
// int main(){
//     int n = 5;
//     vector<int> arr = {1,2,4,5};
//     cout << missing(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int missing(int n , vector<int> &arr){
//     int xor1 = 0;
//     for(int i = 1 ; i <= n; i++){
//         xor1 = xor1^i;
//     }
//     int xor2 = 0;
//     for(int i = 0 ; i < arr.size() ; i++){
//        xor2 = xor2^arr[i];
//     }
//     return  xor1^xor2;
// }
// int main(){
//     int n = 5;
//     vector<int> arr = {1,2,4,5};
//     cout << missing(n , arr);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace  std;
// int max(int n , vector<int> &arr){
//     int count = 0;
//     int maxi = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == 1){
//             count++;
//             maxi = max(count , maxi);
//         }
//         else{
//             count = 0;
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n = 9;
//     vector<int> arr = {1,1,0,1,1,1,1,0,1};
//     cout << max(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int once(int n , vector<int> &arr){
//     unordered_map<int,int> mpp;
//     for(int i = 0 ; i < n ; i++){
//         mpp[arr[i]]++;
//         for
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int twice(int n , vector<int> &arr){
//     for(int i = 0 ; i < n ; i++){
//         int count = 0;
//         for(int j = 0 ; j < n ; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count == 1){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     int n = 7;
//     vector<int> arr = {1,1,2,3,3,4,4};
//     cout << twice(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int  subarr(int n , int k, vector<int> &arr){
//     int length = 0;
//     for(int i = 0 ; i< n ; i++){
    
//         int sum = 0;
//         for(int j = i ; j < n ; j++){
//             sum += arr[j];
//             if(sum == k){
//                 length = max(length , j - i +1);
//             }
//         }
//     }
//     return length;
// }
// int main(){
//     int n = 6;
//     int k = 3;

//     vector<int> arr = {1,2,1,1,1,1};

//     cout << subarr(n, k, arr);

//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int longest(int n , int k , vector<int> &arr){
//     int left = 0 , right = 0;
//     int maxlen = 0 ;
//     int sum = arr[0] ;
//     while(right < n ){
//         while(left < right && sum > k){
//             sum = sum - arr[left];
//             left++;
//         }
//         if(sum == k){
//             maxlen = max(maxlen , right - left +1);
//         }
//         right++;
//         if(right < n ){
//             sum = sum + arr[right];
//         }
//     }
//     return maxlen;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> twosum(int n , int k , vector<int> &arr){
//     for(int i = 0 ; i < n ; i++){
//         for(int j = i+1 ; j < n ; j++){
//             if(arr[i] + arr[j] == k){
//                 return {arr[i] , arr[j]};
//             }
//         }
//     }
// }
// int main(){
//     int n = 5;
//     int k = 14;
//     vector<int> arr = {2,6,5,8,11};
//     vector<int> res = twosum(n , k , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// string twosum(int n , int k , vector<int> &arr){
//     unordered_map<int,int> mpp;
//     for(int i = 0 ; i < n ; i++){
//         int req = k - arr[i];
//         if(mpp.find(req) != mpp.end()){
//             return "YES";
//         }
//         mpp[arr[i]] = i;
//     }
//     return "NO";
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> twosum(int n , int k , vector<int> &arr){
//     sort(arr.begin() , arr.end());
//     int left = 0 , right  = n-1;
//     while(left < right){
//         if(arr[left] + arr[right] < k){
//             left++;
//         }
//         else if(arr[left] + arr[right] > k){
//             right--;
//         }
//         else{
//             return {left , right};
//         }
//     }
//     return {-1,-1};
// }
// int main(){
//     int n = 5 ; 
//     int k = 14 ;
//     vector<int> arr = {2,6,5,8,11};
//     vector<int> res = twosum(n , k ,arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sort(int n , vector<int> &arr){
//     int zero_count = 0 , ones_count = 0 , twos_count = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == 0){
//             zero_count++;
//         }
//         else if(arr[i] == 1){
//             ones_count++;
//         }
//         else{
//             twos_count++;
//         }
//     }
//     for(int i = 0 ; i < zero_count ; i++){
//         arr[i] = 0;
//     }
//     for(int i = zero_count ; i < zero_count + ones_count ; i++){
//         arr[i] = 1;
//     }
//     for(int i = zero_count + ones_count ; i < n ; i++){
//         arr[i] = 2;
//     }
//     return arr;
// }
// int main(){
//     int n = 12;
//     vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
//     vector<int> res = sort(n ,arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sort(int n , vector<int> &arr){
//     int low = 0 , high = n - 1;
//     int mid = 0;
//     while(mid <= high){
//         if(arr[mid] == 0){
//             swap(arr[mid] , arr[low]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid] == 1){
//             mid++;
//         }
//         else{
//             swap(arr[high] , arr[mid]);
//             high--;
//         }
//     }
//     return arr;
// }
// int main(){
//     int n = 12;
//     vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
//     vector<int> res = sort(n ,arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int majority(int n , vector<int> &arr){
//     for(int i = 0 ; i < n ; i++){
//         int count = 0;
//         for(int j = 0 ; j < n ; j++){
//             if(arr[j] == arr[i]){
//                 count++;
//             }
//             if(count > n/2){
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     int n = 12;
//     vector<int> arr = {2,2,3,4,5,5,5,5,5,5,4,5};
//     cout << majority(n , arr);
//     return 0;
// }
   
// #include<bits/stdc++.h>
// using namespace std;
// int major(int n , vector<int> &arr){
//     unordered_map<int,int> mpp;
//     for(int i = 0 ; i < n ; i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         if(it.second > n /2){
//             return it.first;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n = 12;
//     vector<int> arr = {2,2,3,4,5,5,5,5,5,5,4,5};
//     cout << major(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int major(int n , vector<int> &arr){
//     int count = 0;
//     int ele ;
//     for(int i = 0 ; i < n ; i++){
//         if(count == 0){
//             ele=arr[i];
//             count = 1;
//         }
//         else if(ele == arr[i]){
//             count++;
//         }
//         else{
//             count--;
//         }
//     }
//     int count1 = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == ele){
//             count1++;
//         } 
//     }
//     if(count1 > n/2){
//         return ele;
//     }
//     return -1;
// }
// int main(){
//     int n = 12;
//     vector<int> arr = {2,2,3,4,5,5,5,5,5,5,4,5};
//     cout << major(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int maxsum(int n , vector<int> &arr){
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         int sum = 0;
//         for(int j = i ; j < n ; j++){
//             sum = sum + arr[j];
//             maxi = max(maxi , sum);
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n = 8;
//     vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
//     cout << maxsum(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int maxsum(int n , vector<int> &arr){
//     int maxi = INT_MIN;
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++){
//         sum = sum + arr[i];
//         maxi = max(maxi , sum);
//         if(sum < 0){
//             sum = 0;
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n = 8;
//     vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
//     cout << maxsum(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rearrange(int n , vector<int> &arr){
//     vector<int> pos ;
//     vector<int> neg ;
//     for(int i = 0 ; i < n ; i++ ){
//         if(arr[i] < 0){
//             neg.push_back(arr[i]);
//         }
//         else{
//             pos.push_back(arr[i]);
//         }
//     }
//     int p = 0;
//     int q = 0;
//     for(int i = 0 ; i < n; i++){
//         if(i%2==0){
//             arr[i] = pos[p];
//             p++;
//         }
//         else{
//             arr[i] = neg[q];
//             q++;
//         }
//     }
  
//     return arr;
// }
// int main(){
//     int n = 6;
//     vector<int> arr = {3,1,-2,-5,2,-4};
//     vector<int> res = rearrange(n , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rearrange(int n , vector<int> &arr){
//     vector<int> ans(n , 0);
//     int posindex = 0;
//     int negindex = 1;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] < 0){
//             ans[negindex] = arr[i];
//             negindex += 2;
//         }
//         else{
//            ans[posindex] = arr[i];
//            posindex += 2;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n = 6;
//     vector<int> arr = {3,1,-2,-5,2,-4};
//     vector<int> res = rearrange(n , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>  // connected graph layi
// using namespace std;
// vector<int> bfs(int node , int n , vector<int> adj[]){
//     vector<int> visited(n,0);
//     queue<int> q;
//     visited[node] = 1;
//     q.push(node);
//     vector<int> bfsorder;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         bfsorder.push_back(temp);
//         for(auto it: adj[temp]){
//             if(!visited[it]){
//                 visited[it] = 1;
//                 q.push(it);
//             }
//         }
//     }
//     return bfsorder;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int node , int n , vector<int> adj[], vector<int> &visited , vector<int> &dfsarr){
//     visited[node]=1;
//     dfsarr.push_back(node);
//     for(auto it : adj[node]){
//         if(!visited[it]){
//             dfs(it , n , adj , visited , dfsarr);
//         }
//     }
// }
// vector<int> dfsorder(int n , vector<int> adj[]){
//     vector<int> visited(n ,0);
//     vector<int> dfsarr;
//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(i , n, adj , visited , dfsarr) ;
//         }
//     }
//     return  dfsarr;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int node , int n , vector<int> adj[] , vector<int> &visited , stack<int> &st){
//     visited[node] =1;
//     for(auto it : adj[node]){
//         if(!visited[it]){
//             dfs(it , n , adj , visited , st);
//         }
//     }
//     st.push(node);
// }
// vector<int> topo(int n , vector<int> adj[]){
//     vector<int> visited(n , 0);
//     stack<int> st;
//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(i , n , adj ,visited, st);
//         }
//     }

//     vector<int> toposort;
//     while(!st.empty()){
//         int temp = st.top();
//         st.pop();
//         toposort.push_back(temp);
//     }
//     return toposort;
// } 

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> bfs(int n , vector<int> adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topological;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();

//         topological.push_back(temp);

//         for(auto it : adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     return topological;
// }

// #include<bits/stdc++.h>
// using namespace  std;
// bool detectcycle(int n  , vector<int> adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ;  i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }
//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
    
//     vector<int> topolog;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         topolog.push_back(temp);

//         for(auto it : adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     if(topolog.size() == n){
//         return false;
//     }
//     return true;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool course(int n , vector<pair<int,int>> prerequisites){
//     vector<int> adj[n];
//     vector<int> indegree(n , 0);
//     for(auto it : prerequisites){
//         adj[it.first].push_back(it.second);
        
//     }

//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0 ){
//             q.push(i);
//         }
//     }
//     vector<int> topolog(n , 0);
//     while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         topolog.push_back(node);

//         for(auto it : adj[node]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     if(topolog.size() == n){
//         return true;
//     }
//     return false;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> safe(int n , vector<int> adj[]){
//     // i to it 
//     // it to i
//     vector<int> adjRev[n];
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             adjRev[it].push_back(i);
//         }
//     }

//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }
//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i]== 0){
//             q.push(i);
//         }
//     }
//     vector<int> topolog(n , 0);
//     while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         topolog.push_back(node);
//         for(auto it : adj[node]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     sort(topolog.begin() , topolog.end());
//     return topolog;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> topo(int n , vector<int> adj[]){
//     vector<int> indegree(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//     }

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     vector<int> topological;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();

//         topological.push_back(temp);

//         for(auto it : adj[temp]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
//     }
//     return topological;
// }
// string alien(string dict[] , int n , int k){
//     vector<int> adj[k];

//     for(int i = 0 ; i < n-1 ; i++){
//         string s1 = dict[i];
//         string s2 = dict[i+1];
//         int len = min(s1.size() , s2.size());
//         for(int ptr = 0 ; ptr < len ; ptr++){
//             if(s1[ptr] != s2[ptr]){
//                 adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
//                 break;
//             } 
//         }
//     }

//     vector<int> res = topo(n , adj);
//     string ans = "";
//     for(auto it : res){
//         ans = ans + char(it + 'a');
//     }
//     return ans;
// }

// #include<bits/stdc++.h> 
// using namespace std;
// int greaterele(int n , vector<int> &arr){
//     for(int i = 0 ; i < n ; i++){
//         int count = 0;
//         for(int j = 0 ; j < n ; j++){
//             if(arr[j] == arr[i]){
//                 count++;
//             }
//         }
//         if(count > n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     int n = 8;
//     vector<int> arr ={1,2,3,4,4,4,4,4};
//     cout <<  greaterele(n , arr);
//     return 0;
// }


// #include<bits/stdc++.h> 
// using namespace std;
// vector<int> greaterele(int n , vector<int> &arr){
//     unordered_map<int, int> mpp;
//     for(int i=0 ; i < n ; i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         if(it.second > n/2){
//             return {it.first ,  it.second};
//         }
//     }
//     return {-1,-1};
// }
// int main(){
//     int n = 12;
//     vector<int> arr ={1,2,3,3,3,4,4,3,3,3,3,3};
//     vector<int> res = greaterele(n , arr);
//     cout << res[0] << " occurs " << res[1] << " times";
//     return 0;
// }

//moore voting algo
// #include<bits/stdc++.h> 
// using namespace std;
// int greaterele(int n , vector<int> &arr){
//     int ele ;
//     int count = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(count == 0){
//             count = 1;
//             ele = arr[i];
//         }
//         else if(arr[i] == ele){
//             count++;
//         }
//         else{
//             count--;
//         }
//     }
//     int count1 = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == ele){
//             count1++;
//         }
//     }
//     if(count1 > n/2){
//         return ele;
//     }
// }
// int main(){
//     int n = 8;
//     vector<int> arr ={1,2,3,4,4,4,4,4};
//     cout <<  greaterele(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int maximum(int n , vector<int> &arr){
//     int maxi = INT_MIN;
//     for(int i = 0 ;  i < n ; i++){
//         int sum = 0;
//         for(int j = i ; j < n ; j++){
//             sum = sum  + arr[j];
//             maxi = max(maxi , sum);
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n = 6;
//     vector<int> arr ={-2,3,1,4,-5,2};
//     cout << maximum(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int kadanes(int n , vector<int> &arr){
//     int maxi = INT_MIN;
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++){
//         sum = sum + arr[i];
//         maxi = max(maxi , sum);
//         if(sum < 0){
//             sum = 0;
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n = 6;
//     vector<int> arr ={-2,3,1,4,-5,2};
//     cout << kadanes(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sort(int n , vector<int> &arr){
//     sort(arr.begin() , arr.end());
//     return arr;
// }
// int main(){
//     int n = 9 ;
//     vector<int> arr = {0,1,2,2,2,2,0,1,1};
//     vector<int> res = sort(n , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sort(int n , vector<int> &arr){
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for(int i = 0 ; i <n ; i++){
//         if(arr[i] == 0){
//             count0++;
//         }
//         else if(arr[i] == 1){
//             count1++;
//         }
//         else{
//             count2++;
//         }
//     }
//     for(int i = 0 ; i < count0 ; i++){
//         arr[i] = 0;
//     }
//     for(int i = count0 ; i < count0 + count1 ; i++){
//         arr[i] = 1;
//     }
//     for(int i = count0 + count1 ; i < n ; i++){
//         arr[i] = 2;
//     }
//     return arr;
// }
// int main(){
//     int n = 9 ;
//     vector<int> arr = {0,1,2,2,2,2,0,1,1};
//     vector<int> res = sort(n , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sort(int n , vector<int> &arr){
//     int low = 0 ;
//     int mid = 0 ;
//     int high = n-1;
//     while(mid <= high){
//         if(arr[mid] == 0){
//             swap(arr[mid] , arr[low]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid] == 1){
//             mid++;
//         }
//         else{
//             swap(arr[mid] , arr[high]);
//             high--;
//         }
//     }
//     return arr;
// }
// int main(){
//     int n = 12 ;
//     vector<int> arr = {0,1,2,2,2,2,0,1,1,0,0,2};
//     vector<int> res = sort(n , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int countsub(int n , vector<int> &arr , int k){
//     int count= 0;
//     for(int i = 0 ; i < n ; i++){
//         int sum = 0;
//         for(int j = i ; j < n ; j++){
//             sum = sum + arr[j];
//             if(sum == k){
//             count++;
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     int n = 10;
//     vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3};
//     int k = 3;
//     cout << countsub(n , arr , k);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> leader(int n , vector<int> &arr){
//     vector<int> leadarr;
//     for(int i = 0 ; i < n ; i++){
//         bool leader = true;
//         for(int j = i + 1 ; j < n ; j++){
//             if(arr[j] > arr[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader == true){
//             leadarr.push_back(arr[i]);
//         }
//     }
//     return leadarr;
// }
// int main(){
//     int n = 6;
//     vector<int> arr = {10,22,12,3,0,6};
//     vector<int> res = leader(n , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> leader(int n , vector<int> &arr){
//     int maxi = INT_MIN;
//     vector<int> ans;
//     for(int i = n-1 ; i >=0 ; i--){
//         if(arr[i] > maxi){
//             ans.push_back(arr[i]);
//             maxi = max(maxi , arr[i]);
//         }
//     }
//     reverse(ans.begin() , ans.end());
//     return ans;
// }
// int main(){
//     int n = 6;
//     vector<int> arr = {10,22,12,3,0,6};
//     vector<int> res = leader(n , arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int greaterele(int n , vector<int> &arr){
//     int ele;
//     int count = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(count == 0){
//             count = 1;
//             ele = arr[i];
//         }
//         else if(arr[i] == ele){
//             count++;
//         }
//         else{
//             count--;
//         }
//     }
//     int count1 = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(ele = arr[i]){
//             count1++;
//             if(count1 > n / 2){
//                 return ele;
//             }
//         }
//     }
// }
// int main(){
//     int n = 8;
//     vector<int> arr = {1,2,3,5,5,5,5,5};
//     cout << greaterele(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> leader(int n , vector<int> &arr){
//     vector<int> leadarr;
   
//     for(int i = 0 ; i < n ; i++){
//         bool leader = true;
//         for(int j = i+1 ; j < n ; j++){
//             if(arr[j] > arr[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader == true){
//             leadarr.push_back(arr[i]);
//         }
//     }
//     return leadarr;
// }
// int main(){
//     int n = 6;
//     vector<int> arr = {16, 17, 4, 3, 5, 2};
//     vector<int> res = leader(n ,arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> leader(int n , vector<int> &arr){
//     vector<int> leadarr;
//     int maxi = INT_MIN;
//     for(int i = n-1 ; i >=0 ; i--){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//             leadarr.push_back(arr[i]);
//         }
//     }
//     reverse(leadarr.begin() , leadarr.end());
//     return leadarr;
// }
// int main(){
//     int n = 6;
//     vector<int> arr = {16, 17, 4, 3, 5, 2};
//     vector<int> res = leader(n ,arr);
//     for(auto it : res){
//         cout << it << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int maximumele(int n , vector<int> &arr){
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         int sum = 0;
//         for(int j = i ; j < n ; j++){
//             sum = sum + arr[j];
//             maxi = max(maxi , sum);
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n = 8;
//     vector<int> arr = {-2,-3,4,6,-1,-5,9,8};
//     cout << maximumele(n , arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int maximumele(int n , vector<int> &arr){
//     int sum = 0;
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         sum = sum +arr[i];
//         if(sum < 0){
//             sum = 0;
//         }
//         maxi = max(sum , maxi);
//     }
//     return maxi;
// }
// int main(){
//     int n = 8;
//     vector<int> arr = {-2,-3,4,6,-1,-5,9,8};
//     cout << maximumele(n , arr);
//     return 0;
// }















































