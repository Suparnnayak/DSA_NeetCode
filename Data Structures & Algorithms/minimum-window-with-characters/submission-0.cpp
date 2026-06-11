class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>n;
        unordered_map<char,int>window;
        for(char c:t){
        n[c]++;
        }   
        int l=0;int r=0;
        int required=n.size();
        int formed=0;
        int min_len=INT_MAX;
        int start=0; 
        while(r<s.size()){
            char c=s[r];
            window[c]++;

            if(n.count(c)&&n[c]==window[c]){
                formed++;
            }
            while(l<=r && formed==required){
                if(r-l+1<min_len){
                    min_len=r-l+1;
                    start= l;
                }
                char left=s[l];
                window[left]--;
                if(n.count(left)&& window[left]<n[left]){
                    formed--;
                }
                l++;
            }
            r++;

        }
        return min_len==INT_MAX?"":s.substr(start,min_len);
    }
};