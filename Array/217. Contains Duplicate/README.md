#### 217. Contains Duplicate

- **Difficulty:** Easy
- **Topics:** Array, Two Pointers, Hash Table
- **LeetCode Link:** [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)

---

#### 1. Understand

Clarify problem requirements, ask edge-case questions, define inputs/outputs.


#### 2. Match

Identify patterns, data structures, and algorithmic strategies.

#### 3. Plan

Write pseudocode and outline high-level logic before coding.

#### 4. Implementation

Write clean, efficient code and speak thoughts out loud.

#### 5. Review

Dry-run the code line-by-line using test cases and fix edge-case bugs.

#### 6. Complexity Evaluation

Calculate Time and Space Complexity and discuss tradeoffs.

- Time Complexity: $O(...)$
- Space Complexity: $O(...)$

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
