class Solution {
public:
    bool isValid(string s) {
        stack<char> k;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                k.push(c);
            } else {
                if (k.empty()) return false;

                if ((c == ')' && k.top() != '(') ||
                    (c == ']' && k.top() != '[') ||
                    (c == '}' && k.top() != '{')) {
                    return false;
                }

                k.pop();
            }
        }

        return k.empty();
    }
};