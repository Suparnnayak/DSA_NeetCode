class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty()){
            string s=q.front().first;
            int steps=q.front().second;
            q.pop();
            if(s==endWord)return steps;
            for(int i=0;i<s.size();i++){
                char ori=s[i];
                for(char c='a';c<='z';c++){
                    s[i]=c;
                    if(st.find(s)!=st.end()){
                        st.erase(s);
                        q.push({s,steps+1});
                    }
                }
                s[i]=ori;
            }
        }
    return 0;
    }
};
