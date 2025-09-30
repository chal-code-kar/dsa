// https://www.educative.io/interview-prep/coding/reverse-words-in-a-string

vector<string> toVector(string& str) {
    str += ' ';
    vector<string> words;
    string word;
    
    for (int idx = 0; idx < str.size(); ++idx) {
        if (str[idx] == ' ') {
            if (word.empty()) continue;
            words.push_back(word);
            word.clear();
        } else {
            word += str[idx];
        }
    }
    
    str.pop_back();
    
    return words;
}

vector<string> reverse(vector<string>& words) {
    int n = words.size();
    
    for (int i = 0; i < n / 2; ++i) {
        swap(words[i], words[n - i - 1]);
    }
    
    return words;
}

string toString(vector<string>& words) {
    return accumulate(begin(words), end(words), string(""), [&](string& a, string& b) {
        return a + (a.empty() ? "" : " ") + b;
    });
}

string ReverseWords(string sentence) {
    auto words = toVector(sentence);
    auto reverseWords = reverse(words);
    return toString(reverseWords);
}
