#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& text) {
    std::string cleanedText;
    
    // Remove non-alphanumeric characters and convert to lowercase
    for (char c : text) {
        if (isalnum(c)) {
            cleanedText += tolower(c);
        }
    }

    // Check palindrome
    std::string reversedText = cleanedText;
    std::reverse(reversedText.begin(), reversedText.end());

    return cleanedText == reversedText;
}

int main() {
    std::string input;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "It's a palindrome!\n";
    } else {
        std::cout << "Not a palindrome.\n";
    }

    return 0;
}
