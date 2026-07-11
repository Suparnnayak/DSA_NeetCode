class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>count(26,0);
        for(char task:tasks){
            count[task-'A']++;
        }    
        sort(count.begin(),count.end());
        int maxi=count[25];
        int idle=(maxi-1)*n;
        for(int i=24;i>=0;i--){
            idle-=min(count[i],maxi-1);
        }
        return max(0,idle)+tasks.size();
    }
};
