#include <iostream>

int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE
    bool is_palindrome = true;
    int left = 0;
    int right = str.length()-1;

    while (is_palindrome && left < right) {
    	if (str[left++] != str[right--]) {
    		is_palindrome = false;
    	}
    }

	if (is_palindrome) {
	  std::cout << str << " is a palindrome" << std::endl;
	} else {
	  std::cout << str << " is NOT a palindrome" << std::endl;
	}

    return 0;
}
