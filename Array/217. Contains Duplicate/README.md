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

| Category | `std::unordered_map<Key, Value>` | `std::unordered_set<Key>` |
| :--- | :--- | :--- |
| **Data Stored** | Key-Value pairs (`std::pair<const Key, Value>`) | Keys only (unique elements) |
| **Primary Use Case** | Associative lookups mapping a unique key to a value (e.g., frequency counting, index mapping, dictionary lookups) | Tracking existence, uniqueness, or visited items (e.g., checking if an item was seen before) |
| **Template Arguments** | Requires **at least 2** types: `std::unordered_map<Key, Value>` *(optional 3rd & 4th for Hash and KeyEqual)* | Requires **at least 1** type: `std::unordered_set<Key>` *(optional 2nd & 3rd for Hash and KeyEqual)* |
| **Adding Items** | • `map[key] = value` *(Inserts or updates)*<br>• `map.insert({key, value})`<br>• `map.emplace(key, value)` | • `set.insert(element)`<br>• `set.emplace(element)`<br>*(Note: `[]` operator is not supported)* |
| **Searching Items** | • `map.find(key)` *(Returns iterator to `std::pair`)*<br>• `map.contains(key)` *(C++20, returns `bool`)*<br>• `map.count(key)` *(Returns `1` or `0`)*<br>• `map.at(key)` / `map[key]` *(Accesses value directly)* | • `set.find(element)` *(Returns iterator to element)*<br>• `set.contains(element)` *(C++20, returns `bool`)*<br>• `set.count(element)` *(Returns `1` or `0`)* |
| **Deleting Items** | • `map.erase(key)` *(Removes entry by key)*<br>• `map.erase(iterator)` *(Removes entry at position)*<br>• `map.clear()` *(Removes all entries)* | • `set.erase(element)` *(Removes element by value)*<br>• `set.erase(iterator)` *(Removes element at position)*<br>• `set.clear()` *(Removes all elements)* |
