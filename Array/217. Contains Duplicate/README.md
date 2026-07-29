#### 217. Contains Duplicate

- **Difficulty:** Easy
- **Topics:** Array, Hash Table, Sorting
- **LeetCode Link:** [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)

---

## UMPIRE Method

### (U) Understand

Clarify problem requirements, ask edge-case questions, define inputs/outputs.

1. **Can the array be empty or have only one element?** The constraints state $1 \le \text{nums.length} \le 10^5$. If the length is 1, it should return `false` as no duplicates can exist.
2. **Can array elements be negative?** Yes ($-10^9 \le \text{nums}[i] \le 10^9$).
3. **Are there memory constraints?** Yes, this dictates whether we should use extra memory for speed (Hash Set) or save memory at the cost of slight speed reduction (Sorting).
4. **Do we need to return the duplicate value itself?** No, just a boolean (`true` or `false`).

### (M) Match

Identify patterns, data structures, and algorithmic strategies.

* **Brute Force:**
  * Nested loops checking every possible pair $(i, j)$.
  * Time: $O(n^2)$, Space: $O(1)$. (Will result in Time Limit Exceeded).
* **Hash Set (Optimal for Time):**
  * Store visited numbers in a hash set (`std::unordered_set<int>`).
  * For each element, check if it already exists in the set.
  * Time: $O(n)$ average, Space: $O(n)$.
* **Sorting (Optimal for Space & Cache Locality):**
  * Sort elements in-place. Any duplicates will end up adjacent to each other.
  * Time: $O(n \log n)$, Space: $O(1)$ auxiliary.

### (P) Plan

Write pseudocode and outline high-level logic before coding (focusing on the **Sorting** approach).

1. Use standard library functions to sort the `nums` array in-place.
2. Loop through `nums` from index $0$ to $n-2$.
   * Check if the current element equals the adjacent next element (`nums[i] == nums[i + 1]`).
   * **If equal:** We found a duplicate, return `true`.
3. If the loop completes without finding any adjacent matches, return `false`.

### (I) Implementation

Write clean, efficient code and speak thoughts out loud.

*(Refer to `solution.cpp` for code implementation)*

### (R) Review

Dry-run the code line-by-line using test cases and fix edge-case bugs.

### (E) Evaluation

Calculate Time and Space Complexity and discuss tradeoffs.

* **Time Complexity:** $O(n \log n)$ — The dominant operation is sorting the array (`std::sort`). The subsequent linear scan only takes $O(n)$ time.
* **Space Complexity:** $O(1)$ auxiliary — We modify the array in-place, requiring no extra data structures like hash sets. Note that `std::sort` may use $O(\log n)$ stack space for recursion under the hood, but it requires significantly less memory than the $O(n)$ dynamic allocations needed for a hash table.

---

#### Note:

- Comparison table between `std::unordered_map` and `std::unordered_set` in C++:
- 
| Feature / Operation | `std::unordered_map<Key, Value>` | `std::unordered_set<Key>` |
| :--- | :--- | :--- |
| **Data Stored** | Key-Value pairs (`std::pair<const Key, Value>`) | Keys only (unique elements) |
| **Primary Use Cases** | Frequency/count tracking, index/position caching, dictionary/lookup tables, memoization | Uniqueness checks, tracking visited nodes/states, set intersection/difference |
| **Template Arguments** | `std::unordered_map<Key, Value, Hash, KeyEqual>` | `std::unordered_set<Key, Hash, KeyEqual>` |
| **Adding Items** | • `map[key] = value`<br>• `map.insert({key, value})`<br>• `map.emplace(key, value)` | • `set.insert(element)`<br>• `set.emplace(element)` |
| **Searching Items** | • `map.find(key)`<br>• `map.contains(key)` *(C++20)*<br>• `map.count(key)`<br>• `map.at(key)` / `map[key]` | • `set.find(element)`<br>• `set.contains(element)` *(C++20)*<br>• `set.count(element)` |
| **Deleting Items** | • `map.erase(key)`<br>• `map.erase(iterator)`<br>• `map.clear()` | • `set.erase(element)`<br>• `set.erase(iterator)`<br>• `set.clear()` |
| **Comparing Tables (`==` / `!=`)** | Returns `true` if both maps have the same number of keys and matching key-value pairs | Returns `true` if both sets have the same number of elements and identical contents |
| **Custom Comparison / Types** | Requires custom `std::hash` specialization and `operator==` for custom `Key` types | Requires custom `std::hash` specialization and `operator==` for custom `Key` types |
| **Range-Based Iteration** | Iterates over `std::pair<const Key, Value>` (`for (auto& [key, val] : map)`) | Iterates over `const Key` directly (`for (const auto& elem : set)`) |
| **Modifying Elements** | Keys are `const` (immutable), but values **can** be modified in place (`map[key]++`) | Keys are `const` (immutable); to change an element, you must erase and re-insert it |
| **Extract / Move Node *(C++17)*** | `auto node = map.extract(key);` *(Allows moving keys without reallocating memory)* | `auto node = set.extract(element);` *(Allows moving elements without reallocating memory)* |
| **Set Operations (Union / Intersection)** | Not natively suited; must be implemented manually by comparing keys | Easily performed using algorithms like `std::set_intersection` (with sorted copies) or manual loops |
