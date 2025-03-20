class Solution {
public:
    int lengthOfLastWord(string s) {
       int idx = s.length()-1;
       while(idx>=0 && s[idx] == ' ' ){
        idx--;
       }
       int c=0;
       while(idx>=0 && s[idx] !=' ' ){
        c++;
        idx--;
       }
       return c;
    }
};