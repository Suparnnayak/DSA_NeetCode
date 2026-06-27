class Solution {
public:
    vector<string>ans;
    vector<string>digittochar={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxys"};
        
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return ans;
        backtrack(0,"",digits);
        return ans;   
    }
    void backtrack(int i,string curstr,string &digits){
        if(curstr.size()==digits.size()){
            ans.push_back(curstr);
            return;
        }
        string chars=digittochar[digits[i]-'0'];
        for(char c:chars)backtrack(i+1,curstr+c,digits);
    }
};
