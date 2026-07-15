class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char>a=
        {{')','('},
        {']','['},
        {'}','{'}
        };
        for(char c:s){
            if(a[c]){
                if(!st.empty()&& st.top()==a[c]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
