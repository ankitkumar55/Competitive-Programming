class Solution {
public:
    vector<string> ambiguousCoordinates(string s) {
        string cur1 = "";
        string cur2 = "";
        vector<string> res;
        bool confirmedFirstPart = false;
        bool usedDot = false;
        backtrack(s, cur1, cur2, res, 0, confirmedFirstPart, usedDot);
        return res;
    }
    void backtrack(string& s, string& cur1, string& cur2, vector<string>& res, int index, bool& confirmedFirstPart, bool& usedDot)
    {
        if (index == s.length())
        {
            if (confirmedFirstPart == true)
            {
                if (cur2.size() != 2 && (cur2[cur2.size() - 2] == '0') && (cur2[0] == '0')) return;
                res.push_back(cur1 + cur2);
            }
            return;
        }
        if (s[index] != '(' && s[index] != ')')
        {
            if (usedDot == false && index != s.length() - 2)
            {
                if (!confirmedFirstPart)
                {
                    cur1.push_back(s[index]);
                    cur1.push_back('.');
                    usedDot = true;
                    backtrack(s, cur1, cur2, res, index + 1, confirmedFirstPart, usedDot);
                    cur1.pop_back();
                    cur1.pop_back();
                    usedDot = false;
                }
                else
                {
                    cur2.push_back(s[index]);
                    cur2.push_back('.');
                    usedDot = true;
                    backtrack(s, cur1, cur2, res, index + 1, confirmedFirstPart, usedDot);
                    cur2.pop_back();
                    cur2.pop_back();
                    usedDot = false;
                }
            }
            if (confirmedFirstPart == false && index != s.length() - 2)
            {
                if (!(usedDot == true && s[index] == '0'))
                {
                    cur1.push_back(s[index]);
                    cur1.push_back(',');
                    cur1.push_back(' ');
                    confirmedFirstPart = true;
                    bool usedDotCopy = usedDot;
                    usedDot = false;
                    backtrack(s, cur1, cur2, res, index + 1, confirmedFirstPart, usedDot);
                    cur1.pop_back();
                    cur1.pop_back();
                    cur1.pop_back();
                    confirmedFirstPart = false;
                    usedDot = usedDotCopy;
                }
            }
            if (!confirmedFirstPart) 
            {
                if (!(cur1.size() == 1 && s[index] == '0'))
                {
                    cur1.push_back(s[index]);
                    backtrack(s, cur1, cur2, res, index + 1, confirmedFirstPart, usedDot);
                    cur1.pop_back();
                }
            }
            else
            {
                if (!(cur2.empty() && index != s.length() - 2 && s[index] == '0') && 
                    !(usedDot && index == s.length() - 2 && s[index] == '0'))
                {
                    cur2.push_back(s[index]);
                    backtrack(s, cur1, cur2, res, index + 1, confirmedFirstPart, usedDot);
                    cur2.pop_back();
                }
            }
        }
        else
        {
            if (s[index] == '(')
            {
                cur1.push_back('(');
                backtrack(s, cur1, cur2, res, index + 1, confirmedFirstPart, usedDot);
                cur1.pop_back();
            }
            else
            {
                cur2.push_back(')');
                backtrack(s, cur1, cur2, res, index + 1, confirmedFirstPart, usedDot);
                cur2.pop_back();
            }
        }
    }
};
