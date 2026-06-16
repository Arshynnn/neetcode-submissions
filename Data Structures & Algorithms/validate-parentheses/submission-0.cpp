class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                t.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (t.empty()) return false;
                char top = t.top();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) return false;
                t.pop();
            }
        }
        return t.empty();
    }
};
