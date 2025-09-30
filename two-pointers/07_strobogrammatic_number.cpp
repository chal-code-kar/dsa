// https://www.educative.io/interview-prep/coding/strobogrammatic-number

bool IsStrobogrammatic(string num) {
    unordered_map<char, char> mirror;
    mirror['0'] = '0';
    mirror['1'] = '1';
    mirror['6'] = '9';
    mirror['8'] = '8';
    mirror['9'] = '6';
    
    int sz = num.size();
    int mid = (sz + 1) / 2;
    
    for (int i = 0; i < mid; ++i) {
        if (mirror[num[i]] != num[sz - i - 1])
            return false;
    }

    return true;
}