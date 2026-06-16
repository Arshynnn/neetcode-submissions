class Solution {
public:
    bool isPalindrome(string s) {
        string k = "";
        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c)))
            k += tolower(static_cast<unsigned char>(c));
        }

        string t = k;
        reverse(t.begin(), t.end());
        
        return k == t;
    }
};
