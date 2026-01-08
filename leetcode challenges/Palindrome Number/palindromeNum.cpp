// MUST #include <cmath>
class Solution {
public:
    bool isPalindrome(int x) {
        // first check
        if(x < 0) return false;

        int numDigits = 0;
        int temp = x;

        // get num digits
        while(temp > 0){
            numDigits += 1;
            temp /= 10;
        }

        // returns if ! palindrome
        for(int i=0; i<numDigits/2; i++){
            if(x/static_cast<int>(pow(10, i)) % 10 != x/static_cast<int>(pow(10, numDigits-i-1)) % 10) return false;
        }

        return true;
    }
};
