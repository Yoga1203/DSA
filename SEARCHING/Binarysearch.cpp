#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    int low = 0, high, mid;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    high = n - 1;

    cout << "Enter number to search: ";
    cin >> key;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Found at position " << mid;
            found = true;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found)
        cout << "Not found";

    return 0;
}