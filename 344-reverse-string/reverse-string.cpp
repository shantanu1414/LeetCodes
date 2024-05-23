class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(),s.end());
        // vector<char> :: iterator i,f;
        int i=0,f=s.size()-1;
        for(int x=0;x<s.size()/2;x++)
        {
            char t=s[i];
            s[i]=s[f];
            s[f]=t;
            f--;
            i++;
        }
        for(int x=0;x<=s.size()-1;x++)
        {
            cout<<s.at(x);
        }
    }
};