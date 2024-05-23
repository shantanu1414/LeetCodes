class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
            vector<string> s;
            //vector<string>::iterator it=s.begin();
            //s.push_back("[");
             for(int x=0;x<=n-1;x++)
        {
            if((x+1)%3==0 && (x+1)%5==0)
            {
                s.push_back("FizzBuzz");
            }
            else if((x+1)%3==0)
            {
                s.push_back("Fizz");
            }
            else if((x+1)%5==0)
            {
                s.push_back("Buzz");
            }
            else
            {
                // string s1;
                // s1.push_back(48+(x+1));
                s.push_back(to_string(x+1));
            }
            // if(x!=n)
            // {
            //     s.push_back(",");
            // }
        }
            //s.push_back("]");
            return s;

    }
};