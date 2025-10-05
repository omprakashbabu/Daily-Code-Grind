// Problem Description:
// You are given an integer n. Your task is to:
// Calculate the sum of the digits of n.
// Determine whether this digit-sum is a Fibonacci number.
// Return:
// If the digit-sum is a Fibonacci number, return the concatenation of n and the digit-sum.
// If not, return the concatenation of n and the next Fibonacci number after the digit-sum.
// The result should be returned as a string.

// Example 1:
// Input:
// n = 1234
// Explanation:
// Sum of digits = 1 + 2 + 3 + 4 = 10
// 10 is not a Fibonacci number
// The next Fibonacci number after 10 is 13
// So, return "123413"
// Output:
// "123413"

// Example 2:
// Input:
// n = 1232
// Explanation:
// Sum of digits = 1 + 2 + 3 + 2 = 8
// 8 is a Fibonacci number
// So, return "12328"
// Output:
// "12328"

#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    cin >> input;
    int sum = 0;
    
    string str = to_string(input);
    for (char ch : str) {
        int digit = ch - '0';
        sum += digit;
    }

    int a = 0, b = 1;
    while (b < sum) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    if (b == sum) {
        cout << input << sum << endl;
    } else {
        cout << input << b << endl;
    }
    return 0;
}
