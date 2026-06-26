class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        for (string i: t) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                int tmp = s.top();
                s.pop();
                if (i == "+") s.top() += tmp;
                if (i == "-") s.top() -= tmp;
                if (i == "*") s.top() *= tmp;
                if (i == "/") s.top() /= tmp;
            } else s.push(stoi(i));
        }

        return s.top();
    }
};
