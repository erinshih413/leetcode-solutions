class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pointerIndices;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int twoSum = nums[i] + nums[j];

                if (twoSum == target) {
                    pointerIndices.push_back(i);
                    pointerIndices.push_back(j);
                    return pointerIndices;
                }
            }
        }
        return pointerIndices;
    }
};
