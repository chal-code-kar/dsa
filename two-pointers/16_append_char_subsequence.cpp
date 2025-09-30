// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/

class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size(), m = t.size();
        int idx1 = 0;

        for (int idx2 = 0; idx2 < m; ++idx2) {
            while (idx1 < n && s[idx1] != t[idx2])
                ++idx1;

            if (idx1 == n)
                return m - idx2;

            ++idx1;
        }

        return 0;
    }
};