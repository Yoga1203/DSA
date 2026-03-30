#include <iostream>
using namespace std;

int main() {
    char str[100];
    int count = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin>>str;

    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    for(int i = 0; i < count / 2; i++) {
        if(str[i] != str[count - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}