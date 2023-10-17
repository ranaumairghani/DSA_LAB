#include <iostream>
#include <stack>

using namespace std;

string reverseString(const string& input) {
    stack<char> charStack;

    // Push each character from the input string onto the stack
    for (char c : input) {
        charStack.push(c);
    }

    string reversedString;

    // Pop characters from the stack and append them to the reversedString
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

