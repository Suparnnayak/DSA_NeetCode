class WordDictionary {
public:
vector<string>store;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        store.push_back(word);
    }
    
    bool search(string word) {
        for(auto w:store){
            if(w.length()!=word.length())continue;
            int i=0;
            while(i<word.length()){
                if(word[i]==w[i] || word[i]=='.')i++;
                else break;
            }
            if(i==word.length())return true;
        }
        return false;
    }
};
