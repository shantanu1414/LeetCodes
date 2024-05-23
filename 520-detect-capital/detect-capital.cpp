class Solution {
public:
    bool detectCapitalUse(string word) 
    {
           char f=word.at(0);
           int s=word.length();
           if(isupper(f))
           {
               int c=1;
               for(int x=1;x<=s-1;x++)
               {
                   if(isupper(word.at(x)))
                   {
                       c++;
                   }
               }
                   if(c==s)
                   {
                       return true;
                   }
                   else
                   {
                       c=0;
                       for(int x=1;x<=s-1;x++)
                       {
                           
                           if(islower(word.at(x)))
                           {
                               c++;
                           }
                       }
                       if(c==(s-1))
                       {
                           return true;
                       }
                       else
                       {
                           return false;
                       }
                   }
               
           }
           else
           {
               int c=0;
               for(int x=1;x<=word.length()-1;x++)
               {
                   
                   if(islower(word.at(x)))
                   {
                       c++;
                   }
               }
               return c==(s-1)?true:false;
           }
    }
};