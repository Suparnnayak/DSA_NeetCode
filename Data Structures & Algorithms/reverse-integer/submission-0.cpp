class Solution {
public:
    int reverse(int x) {

        bool neg = x < 0;

        string s = to_string(abs((long long)x));

        std::reverse(s.begin(), s.end());

        try {
            int r = stoi(s);
            return neg ? -r : r;
        }
        catch(...) {
            return 0;
        }
    }
};