class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // loops through list until nums found
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums.at(i) + nums.at(j) == target) return {i, j}; // returns final indicies
            }
        }

        return {};
    }
};
