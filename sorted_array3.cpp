#include<iostream> 
using namespace std;
bool sorted(int arr[], int n){
    for(int i = 0  ; i < n -  i ; i++){
        if(arr[i]> arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = { 1 , 2 , 3 , 4 , 5 };
    int n = 5;
    cout << boolalpha << sorted(arr , n);
    return 0;

}