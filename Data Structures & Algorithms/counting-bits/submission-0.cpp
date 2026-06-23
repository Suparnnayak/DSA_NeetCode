class Solution {
public:
    int num_1(int n){
        int cnt=0;
        string r;
        while(n!=0){
            r+=(n%2==0 ?"0":"1");
            n/=2;
        }
        for(int i=0;i<r.size();i++){
            if(r[i]=='1')cnt++;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            int ans=0;
            res.push_back(num_1(i));
        }
    return res;
    }
};
