#include <iostream>
#include <deque>


template<typename T>
void display(const std::deque<T>& deq) {
    std::cout << "[ ";
    for (const auto& element : deq) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

bool is_palindrome(const std::string& s) {
    int i{ 0 };

    std::deque<char> check_palindrome;
    std::deque<char> string_deq;

    for (const auto& c : s) {
        if (std::isalpha(c)) {
            check_palindrome.push_front(std::toupper(c));
            string_deq.push_back(std::toupper(c));
        }
    }

    auto it1 = check_palindrome.begin();
    auto it2 = string_deq.begin();

    while (it1 != check_palindrome.end()) {
        if (*it1 != *it2) {
            return false;
        }
        else {
            it1++;
            it2++;
        }
    }

    return true;
}


int main()
{
    std::cout << "Palindrome using deque test cases: " << std::endl << std::endl;


    std::cout << std::boolalpha;

    // Test case 1 - fail
    std::cout << "Hello: " << is_palindrome("Hello") << std::endl;

    // Test case 2 - string with non-alpha characters
    std::cout << "A Santa At Nasa: " << is_palindrome("A Santa At Nasa") << std::endl;

    // Test case 3 - string with all alpha characters
    std::cout << "Racecar: " << is_palindrome("Racecar") << std::endl;

    // Test case 4 - string that is not a palindrome
    std::cout << "Grinch stole christmas: " << is_palindrome("Grinch stole christmas") << std::endl;

    // Test case 5 - short string that is a palindrome
    std::cout << "WoW: " << is_palindrome("WoW") << std::endl;


    return 0;
}
