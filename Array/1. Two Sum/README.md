## 1. Two Sum

- **Difficulty:** Easy
- **Topics:** Array, Hash Table
- **LeetCode Link:** [1. Two Sum](https://leetcode.com/problems/two-sum/description/)

---

#### **1. Understand**: Clarify problem requirements, ask edge-case questions, define inputs/outputs.

* **Goal:** Given an array of integers `nums` and an integer `target`, return the indices of the two numbers that add up to `target`.
* **Inputs:** `nums` (Array of integers), `target` (Integer).
* **Outputs:** Array of two integers representing indices `[index1, index2]`.
* **Guarantees & Assumptions:**
  * Exactly one valid solution exists.
  * You cannot use the same element twice (e.g., index `i` cannot be paired with itself).
  * The returned order of indices does not matter.
* **Edge Cases & Questions:**
  * *Negative numbers:* Can array elements or the target be negative? Yes (e.g., `nums = [-1, -3, 5]`, `target = -4`).
  * *Duplicates:* Can the array contain duplicate numbers? Yes, as long as they reside at distinct indices (e.g., `nums = [3, 3]`, `target = 6` → `[0, 1]`).
  * *Minimum Array Length:* $N \ge 2$.

#### 2. Match

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

#### 3. Plan

Write pseudocode and outline high-level logic before coding.

1. Initialize an empty hash map `seen` to map values to their indices: `{value: index}`.
2. Loop through `nums` using index `i` and element `num`:
   * Compute `complement = target - num`.
   * Check if `complement` exists in `seen`:
     * **If present:** Return `{seen[complement], i}`.
     * **If absent:** Insert `seen[num] = i`.
3. Return an empty array if no pair is found (fallback step).

#### 4. Implementation

Write clean, efficient code and speak thoughts out loud.

*(Refer to `solution.cpp` for code implementation)*

#### 5. Review

Dry-run the code line-by-line using test cases and fix edge-case bugs.

#### 6. Complexity Evaluation

Calculate Time and Space Complexity and discuss tradeoffs.
* **Time Complexity:** $O(n)$ — We perform a single pass through the array. Hash map search and insertion operations take $O(1)$ time on average.
* **Space Complexity:** $O(n)$ — In the worst-case scenario, we insert up to $n - 1$ elements into the hash map before finding a match.


---
