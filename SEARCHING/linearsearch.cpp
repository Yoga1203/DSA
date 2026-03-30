#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at position " << i;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Not found";

    return 0;
}