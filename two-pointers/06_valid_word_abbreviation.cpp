// https://www.educative.io/interview-prep/coding/valid-word-abbreviation

#include <iostream>
using namespace std;

bool ValidWordAbbreviation(string word, string abbr) {
    int word_idx = 0;
    int abbr_idx = 0;

    while (word_idx < word.size() && abbr_idx < abbr.size()) {
        if (isdigit(abbr[abbr_idx])) {
            if (abbr[abbr_idx] == '0') return false;
            int skip = 0;
            while (abbr_idx < abbr.size() && isdigit(abbr[abbr_idx])) {
                skip = skip * 10 + (abbr[abbr_idx] - '0');
                ++abbr_idx;
            }
            word_idx += skip;
        } else {
            if (word[word_idx] != abbr[abbr_idx]) return false;
            ++word_idx;
            ++abbr_idx;
        }
    }
    
    return word_idx == word.size() && abbr_idx == abbr.size();
}
