class Solution {
private:
    int getnext(int n){
        int t_sum=0;
        while(n>0){
            int d=n%10;
            t_sum+=d*d;
            n/=10;
        }
        return t_sum;
    }
    public:
    bool isHappy(int n) {
        int slow=n;
        int fast=getnext(n);
        while(slow!=fast && fast!=1){
            slow=getnext(slow);
            fast=getnext(getnext(fast));
        }
        return fast==1;
    }
};