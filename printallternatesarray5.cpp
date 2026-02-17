#include <iostream>
using namespace std;

// 🔹 Function to print alternate elements
void printAlternate(int arr[], int n) {

    // Loop 0 se start, 2-2 ka jump
    for (int i = 0; i < n; i = i + 2) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    printAlternate(arr, n);
    return 0;
}
