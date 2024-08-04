
class Solution {
public:
    int reverse(int x) { 
        /* variable to return */
        int reversedValue = 0;
        /* minimum value for integers and maximum value for integers */
        const int MIN_VALUE = -0x80000000, MAX_VALUE = 0x7FFFFFFF;
        while(x != 0) {
            if(reversedValue > MAX_VALUE/10 || reversedValue < MIN_VALUE/10)
                return 0;
            reversedValue *= 10;
            /* add units of x to our variable */
            reversedValue += x%10;
            x/=10;
        }
        return reversedValue;
    }
};
