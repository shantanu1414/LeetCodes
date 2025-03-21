class Solution {
public:
    string reverseWords(string s) {
        string res="";
        s+=" ";
        string word="";
        int i=0;
        while(i<=s.length()-1){
            if(s[i]!=' '){
                word+=s[i];
            }
            if(s[i]!=' ' && s[i+1]==' '){
                res=word+' '+res;
                word="";
            }
            i++;
        }
        
        return res.substr(0,res.length()-1);
    }
};