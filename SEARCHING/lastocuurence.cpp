#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    int position = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            position = i; 
        }
    }

    if(position != -1)
        cout << "Last occurrence at position " << position;
    else
        cout << "Not found";

    return 0;
}