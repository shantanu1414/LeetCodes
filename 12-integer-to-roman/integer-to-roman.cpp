class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        vector<int> values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> romanLetters = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int x=0;x<values.size();x++){
            while(num >= values[x]){
                roman += romanLetters[x];
                num -= values[x]; 
            }
        }
        return roman;        
    }
};