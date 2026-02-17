#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}   

int main()
{
    int n = 42;
    if (isEven(n)){
        cout << " true ";
    }
    else{
        cout << " false ";
    }
}
