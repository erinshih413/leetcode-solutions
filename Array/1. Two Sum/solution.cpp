/**
 * Outcome: Runtime: 75 ms (Beats 9.32%) | Memory: 14.05 MB (Beats 83.41%)
 * 
 * Key Learning:
 * - Declaring `vector<int> pointerIndices` and using `.push_back()` works, 
 *   but adds heap allocation overhead, making execution slower.
 * 
 * All-Pairs Loop Rules:
 * - Outer (i): 0 to n - 2 (stops before last element; j handles the end).
 * - Inner (j): i + 1 to n - 1 (starts strictly after i to prevent self-pairing/duplicates).
 **/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pointerIndices;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    pointerIndices.push_back(i);
                    pointerIndices.push_back(j);
                    return pointerIndices;
                }
            }
        }
        return pointerIndices;
    }
};

/**
 * Outcome: Runtime: 43 ms (Beats 24.14%) | Memory: 14.14 MB (Beats 70.64%)
 * 
 * Key Learning:
 * - Returning `{i, j}` directly as an initializer list avoids extra vector 
 *   allocations, cutting runtime nearly in half (75 ms -> 43 ms).
 * 
 * Complexity:
 * - Time: O(N²) — Checks all N*(N-1)/2 unique pairs.
 * - Space: O(1) — No extra memory allocations.
 **/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Direct return avoids extra vector overhead
                }
            }
        }
        return {};
    }
};
