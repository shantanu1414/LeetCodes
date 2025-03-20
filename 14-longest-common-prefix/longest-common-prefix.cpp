class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        int i=0;
        int len = min(s1.length(),s2.length());
        string res="";
        while(i<=len-1 && s1[i] == s2[i]){
            res+=s1[i];
            i++;
        }
        return res;
    }
};