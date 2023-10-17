#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& equation) {
    std::stack<char> symbolStack;

    for (char c : equation) {
        if (c == '(' || c == '[' || c == '{') {
            symbolStack.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (symbolStack.empty()) {
                return false; // Unbalanced - no matching opening symbol
            }

            char top = symbolStack.top();
            symbolStack.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false; // Unbalanced - mismatched symbols
            }
        }
    }

    return symbolStack.empty(); // Balanced if the stack is empty at the end
}

int main() {
    std::string equation;
    std::cout << "Enter an equation: ";
    std::cin >> equation;

    if (isBalanced(equation)) {
        std::cout << "The equation is balanced." << std::endl;
    } else {
        std::cout << "The equation is not balanced." << std::endl;
    }

    return 0;
}

