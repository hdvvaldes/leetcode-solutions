#include <string>
#include <vector>

class Solution {
    public:
        std::string convert(std::string s, int numRows) {
            /* Optimization with this if 
             * and we also avoid the vector to go out of range
             */
            if(numRows == 1)
                return s;
            /* Declare the vector that lets us codify the message */
            std::vector<std::string> aux(numRows);
            /* Direction
             *  up -> true
             *  down -> false
             */
            bool direction = true;
            /* auxiliar variable to let us iterate over 
             * the multiple string in the array simulating the zig-zag pattern
             */
            int i = 0;
            for(char c : s) {
                /* simulates the hasNext in an iterator */
                if(i == numRows-1 || i == 0)
                    direction = !direction;
                std::string &row = direction? aux.at(i--) : aux.at(i++);
                /* pushes the next element */
                row.push_back(c); 
            }
            std::string zigzag; 
            /* after distributing s between all the strings in the auxiliar vector
             * we create the final string
             */
            for(std::string s : aux) 
                zigzag.append(s);
            /* return the final string */
            return zigzag;
        }  
};
