// https://www.educative.io/interview-prep/coding/valid-palindrome

bool IsPalindrome(string str) {
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) ++left;
        while (left < right && !isalnum(str[right])) --right;
        if (left >= right) return true;

        if (tolower(str[left]) != tolower(str[right])) return false;
        ++left;
        --right;
    }

    return true;
}
