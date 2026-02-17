/*#include<iostream>
using namespace std;

void PrintTable(int n){
    for(int i=1; i<=10 ; i++){
        cout << n << "*" << i << "=" << n * i << endl;

    }
}

int main (){
    int n = 15;
    PrintTable(n);
    return 0;
}
*/

#include<iostream>
using namespace std;

void printtable( int n , int i = 1)
{
    cout<< n << "*" << i << "=" << n * i << endl;
    i++;
    if (i>10){
        return ;
    }
    printtable(n,i);
}
int main(){
    int n = 15;
    printtable(n);
    return 0;
}