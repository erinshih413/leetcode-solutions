/**
 * Outcome: Time Limit Exceeded
 * 
 * Key Learning:
 * - Brute force checks every possible pair, leading to quadratic time complexity.
 * - Nested loops cause a timeout on large input arrays (e.g., N = 10^5).
 * 
 * Complexity:
 * - Time: O(N²) — Checks all N*(N-1)/2 unique pairs in the worst case.
 * - Space: O(1) — Uses constant extra memory.
 **/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

/**
 * Outcome: Runtime: 75 ms (Beats 28.90%) | Memory: 111.41 MB (Beats 15.38%)
 * 
 * Key Learning:
 * - Trading space complexity for time complexity: using a Hash Set (`std::unordered_set`) yields fast O(1) average lookups.
 * - Returning `true` immediately upon finding the first duplicate avoids unnecessary iterations.
 * 
 * Complexity:
 * - Time: O(N) average — Single pass through the array with O(1) average insert and lookup operations per element.
 * - Space: O(N) — In the worst case (all unique elements), the set stores up to N elements.
 **/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;

        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
