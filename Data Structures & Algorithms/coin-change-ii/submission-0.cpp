class Solution {
public:
    int f(int s,int amount, vector<int>& coins){
        if(amount==0)return 1;
        int n=coins.size();
        if(amount<0 || s==n)return 0;
        int pick=f(s,amount-coins[s],coins);
        int n_pick=f(s,amount,coins);
        return pick+n_pick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        return f(0,amount,coins);    
    }
};
