class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        t.reserve(s.size());
        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c)))
                t.push_back(static_cast<char>(tolower(static_cast<unsigned char>(c))));
        }

        int i = 0, j = (int)t.size() - 1;
        while (i < j) {
            if (t[i] != t[j]) return false;
            ++i; --j;
        }
        return true;
        
    }
};
