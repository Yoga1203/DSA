#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int Smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < Smallest) {
            Smallest = arr[i];
        }
    }

    cout << "Smallest element = " << Smallest;
    return 0;
}