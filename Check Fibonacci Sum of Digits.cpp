#include <iostream>
#include <string>
using namespace std;

int main() {
    int input = 1234;
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
