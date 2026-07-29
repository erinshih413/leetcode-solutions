## 1. Two Sum

- **Difficulty:** Easy
- **Topics:** Array, Hash Table
- **LeetCode Link:** [1. Two Sum](https://leetcode.com/problems/two-sum/description/)

---

### Understand

Clarify problem requirements, ask edge-case questions, define inputs/outputs.

1. Can the array be empty?
2. Can array elements or the target be negative? Yes (e.g., `nums = [-1, -3, 5]`, `target = -4`).
3. Any requirement on time/space complexity?
4. Is the array sorted?
5. Can the array contain duplicate numbers?
6. Minimum Array Length? $N \ge 2$.


### Match

Identify patterns, data structures, and algorithmic strategies.

* **Brute Force:**
  * Nested loops checking every pair $(i, j)$. 
  * Time: $O(n^2)$, Space: $O(1)$.
* **Sorting + Two Pointers:**
  * Sort elements and use left/right pointers.
  * Time: $O(n \log n)$, Space: $O(n)$ (to preserve original indices).
* **Hash Table (Optimal):**
  * Store visited numbers and their indices in a hash map (`unordered_map<int, int>`).
  * For each element `x`, calculate complement = `target - x` and check if it exists in the map.
  * Time: $O(n)$, Space: $O(n)$.

### Plan

Write pseudocode and outline high-level logic before coding.


1. Initialize an empty hash map
2. Loop through `nums`
   * Compute `complement = target - num`.
   * Check if `complement` exists:
     * **If present:** Return `{seen[complement], i}`.
     * **If absent:** Insert `seen[num] = i`.
3. Return an empty array if no pair is found.

### Implementation

Write clean, efficient code and speak thoughts out loud.

*(Refer to `solution.cpp` for code implementation)*

### Review

Dry-run the code line-by-line using test cases and fix edge-case bugs.

### Evaluation

Calculate Time and Space Complexity and discuss tradeoffs.
* **Time Complexity:** $O(n)$ — We perform a single pass through the array. Hash map search and insertion operations take $O(1)$ time on average.
* **Space Complexity:** $O(n)$ — In the worst-case scenario, we insert up to $n - 1$ elements into the hash map before finding a match.


---
