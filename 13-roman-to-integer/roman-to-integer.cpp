class Solution { 
public:
    int getVal(char c){
        switch(c){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default:return 0;

        }
    }
    int romanToInt(string s) {
        int sum=0;
        for(int x=0;x<s.length()-1;x++)
        {
            if(getVal(s[x])<getVal(s[x+1])) sum-=getVal(s[x]);
            else sum+=getVal(s[x]);
        }
        sum+=getVal(s[s.length()-1]);
        return sum;
    }
};