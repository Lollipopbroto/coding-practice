class Solution {
public:
    int romanToInt(string s) {

        vector<int> numbers;
        int total = 0;

        for(int i=0; i<s.size(); i++){
            switch(s.at(i)){
                case 'I':
                    numbers.push_back(1);
                    break;
                case 'V':
                    numbers.push_back(5);
                    break;
                case 'X':
                    numbers.push_back(10);
                    break;
                case 'L':
                    numbers.push_back(50);
                    break;
                case 'C':
                    numbers.push_back(100);
                    break;
                case 'D':
                    numbers.push_back(500);
                    break;
                case 'M':
                    numbers.push_back(1000);
                    break;
            }
        }

        for(int i=0; i<numbers.size()-1; i++){
            if(numbers.at(i) < numbers.at(i+1)) total -= numbers.at(i);
            else total += numbers.at(i);
        }

        total += numbers.at(numbers.size()-1);
        return total;
    }
};
