// https://www.educative.io/interview-prep/coding/minimum-number-of-moves-to-make-palindrome

int MinMovesToMakePalindrome(string s) {
    int l = 0;
    int r = s.size() - 1;
    int moves = 0;

    while (l < r) {
        if (s[l] != s[r]) {
            int idx = r;
            while (idx > l && s[idx] != s[l]) --idx;
            if (idx == l) {
                swap(s[l], s[l + 1]);
                ++moves;
                continue;
            } else {
                while (idx < r) {
                    swap(s[idx], s[idx + 1]);
                    ++idx;
                    ++moves;
                }
            }
        }
        ++l;
        --r;
    }

    return moves;
}

// TODO: prove why this works
