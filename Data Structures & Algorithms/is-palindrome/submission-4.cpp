class Solution {
public:
    bool isPalindrome(string s) {
        string k, r;

        for (char c: s) {
            c = tolower(c);
            if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) k += c;
        }

        for (int i = k.size() - 1; i >= 0; --i) r += k[i];

        cout << k << '\n' << r;
        
        return k == r;
    }
};
