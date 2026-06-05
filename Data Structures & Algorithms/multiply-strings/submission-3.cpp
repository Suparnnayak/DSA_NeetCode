class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int m=num1.size();
        int n=num2.size();
        int mul=0;
        vector<int>res(n+m,0);
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                mul=(num1[i]-'0')*(num2[j]-'0'); 
                int p1=i+j;
                int p2=i+j+1;
                int sum=mul+res[p2];
                res[p2]=sum%10;
                res[p1]+=sum/10;
            }
        }    
        string ans="";
        for(int digit:res){
            if(!(ans.empty() && digit==0)){
                ans+=to_string(digit);
            }
        }
        return ans.empty()?"0":ans;
    }
};
