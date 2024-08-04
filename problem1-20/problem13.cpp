#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        int rom = 0;
        for(int i = s.size()-1; i >= 0; i--){
            rom += roman[s[i]];
            if(i-1 >= 0 && roman[s[i-1]] < roman[s[i]])
                rom -= roman[s[--i]];  
        }
        return rom;
    }
};
