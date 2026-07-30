#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the upper limit (n): ";
    cin >> n;

    cout << "Palindrome numbers from 1 to " << n << " are:" << endl;

    for (int num = 1; num <= n; num++) {
        int digits[10]; // to store digits of the number
        int count = 0;
        int temp = num;

        // Step 1: Extract digits and store in array
        while (temp > 0) {
            digits[count] = temp % 10;
            temp /= 10;
            count++;
        }

        // Step 2: Check if digits form a palindrome
        bool isPalindrome = true;
        for (int i = 0; i < count / 2; i++) {
            if (digits[i] != digits[count - i - 1]) {
                isPalindrome = false;
                break;
            }
        }

        // Step 3: If palindrome, print the number
        if (isPalindrome) {
            cout << num << " ";
        }
    }

    return 0;
}
