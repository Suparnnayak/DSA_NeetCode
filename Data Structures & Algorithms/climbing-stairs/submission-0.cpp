class Solution {
public:
    int climbStairs(int n) {
        int step;
        int (n==1)return 1;
        if(n==2)return 2;
        int a=1,b=2;
        for(int i=3;i<n;i++){
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};
