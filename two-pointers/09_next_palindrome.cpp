// https://www.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1

class Solution {
public:
    string nextPalin(string num) {
        int n = num.size();
        if (n <= 3) return "-1";

        int mid = n >> 1;
        string left = num.substr(0, mid);

        if (!next_permutation(left))
            return "-1";

        string res = left;
        if (n & 1) res += num[mid];
        string right = left;
        reverse(begin(right), end(right));
        res += right;
        return res;
    }

    bool next_permutation(string& str) {
        int n = str.size();
        int i = n - 2;

        while (i >= 0 && str[i] >= str[i + 1])
            --i;

        if (i == -1)
            return false;

        int j = n - 1;

        while (str[j] <= str[i])
            --j;

        swap(str[i], str[j]);
        reverse(str.begin() + i + 1, str.end());
        return true;
    }
};  