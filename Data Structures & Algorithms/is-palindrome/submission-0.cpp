class Solution {
public:
    bool isPalindrome(string s) {
        string ns="";
        for(char c:s){
            if(isalnum(c)){
                ns+=tolower(c);
            }
        }
        return ns==string(ns.rbegin(),ns.rend());
    }
};
