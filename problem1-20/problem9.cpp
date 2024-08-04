#include<string>

class Solution {
    public:
        bool isPalindrome(int x) {
            if(x < 0)
                return false;
            std::string n = std::to_string(x);
            int i = 0, j = n.size()-1;
            while(i < j)
                if(n[i++] != n[j--])
                    return false;
            return true;

        }
};
