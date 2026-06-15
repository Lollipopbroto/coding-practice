class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        int numDigits = 0;
        int temp = x;
        while(temp > 0){
            numDigits += 1;
            temp /= 10;
        }

        for(int i = 0; i < numDigits/2; i++){
            int firstDigit = x;
            int lastDigit = x;
            for(int j=0; j < i; j++){
                firstDigit /= 10;
            }
            for(int j=0; j < numDigits - 1 - i; j++){
                lastDigit /=10;
            }
            firstDigit %= 10;
            lastDigit %= 10;
            if(firstDigit != lastDigit) return false;
        }

        return true;
    }
};
