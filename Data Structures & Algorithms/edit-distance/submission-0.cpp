class Solution {
public:
    int solve(int i, int j, string &word1, string &word2) {
        if (i == word1.size())
            return word2.size() - j;
        if (j == word2.size())
            return word1.size() - i;
        if (word1[i] == word2[j])
            return solve(i + 1, j + 1, word1, word2);
        int insertOp = 1 + solve(i, j + 1, word1, word2);
        int deleteOp = 1 + solve(i + 1, j, word1, word2);
        int replaceOp = 1 + solve(i + 1, j + 1, word1, word2);
        return min({insertOp, deleteOp, replaceOp});
    }
    int minDistance(string word1, string word2) {
        return solve(0, 0, word1, word2);
    }
};