class Solution {
public:
    bool checkValidString(string s) {

        stack<int> left_parentheses, stars;
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                left_parentheses.push(i);
            } else if (s[i] == '*') {
                stars.push(i);
            } else { // s[i] == ')'
                if (!left_parentheses.empty()) {
                    left_parentheses.pop();
                } else if (!stars.empty()) {
                    stars.pop();
                } else {
                    return false;
                }
            }
        }
        
        // Check remaining stars and left parentheses
        while (!left_parentheses.empty() && !stars.empty()) {
            if (left_parentheses.top() > stars.top()) {
                return false; // Unmatched left parentheses
            }
            left_parentheses.pop();
            stars.pop();
        }
        
        return left_parentheses.empty();
        
    }
};
