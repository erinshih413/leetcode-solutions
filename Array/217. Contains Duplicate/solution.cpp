/**
 * Method: Brute Force
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
 * Method: Hash Set (std::unordered_set)
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


/**
 * Method: Sorting (std::sort)
 * Outcome: Runtime: 20 ms (Beats 82.60%) | Memory: 82.60 MB (Beats 85.12%)
 * 
 * Key Learning:
 * - In-place sorting places identical elements adjacent to each other, eliminating the need for extra data structures.
 * - Spatial Locality & CPU Cache Efficiency: Contiguous memory access during std::sort and linear iteration outperforms pointer-heavy hash tables in practice.
 * 
 * Why Memory is Lower (82.6 MB vs 111.4 MB):
 * - No dynamic heap allocation: Modifying nums in-place avoids creating dynamic nodes/buckets required by std::unordered_set.
 * - Minimal stack overhead: std::sort uses only O(log N) auxiliary stack space for recursion.
 * 
 * Why Runtime is Faster (20 ms vs 75 ms):
 * - High CPU Cache Hit Rate: Operating on a contiguous vector allows the CPU to prefetch data effectively into L1/L2 caches.
 * - Zero Hash Overhead: Avoids computing hash functions, modulo index math, and pointer dereferencing per element.
 * - Simple Instructions: Checking adjacent elements (nums[i] == nums[i + 1]) executes very quickly in CPU pipelines.
 * 
 * Complexity:
 * - Time: O(N log N) — Dominated by std::sort; adjacent comparison loop takes O(N) linear time.
 * - Space: O(1) auxiliary — In-place array modification using O(log N) recursion stack space.
 **/
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // Step 1: Sort the array in-place
        std::sort(nums.begin(), nums.end());

        // Step 2: Look for adjacent duplicates
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }

        return false;
    }
};
