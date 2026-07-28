## LeetCode Solutions

Welcome to my LeetCode problem-solving repository! 
This repo contains my solutions to various data structure and algorithm challenges, structured using the **UMPIRE Method** learning from [CodePath](https://www.codepath.org/) to prepare for coding interviews.

---

## UMPIRE Method Framework

When solving problems, I follow the **UMPIRE** framework to ensure structured problem-solving, clean code implementation, and effective interview communication:

| Step | Phase | Key Actions |
| :--- | :--- | :--- |
| **U** | **Understand** | Clarify problem requirements, ask edge-case questions, define inputs/outputs. |
| **M** | **Match** | Identify patterns, data structures, and algorithmic strategies. |
| **P** | **Plan** | Write pseudocode and outline high-level logic before coding. |
| **I** | **Implement** | Write clean, efficient code and speak thoughts out loud. |
| **R** | **Review** | Dry-run the code line-by-line using test cases and fix edge-case bugs. |
| **E** | **Evaluate** | Calculate Time and Space Complexity and discuss tradeoffs. |

---

## Solution Documentation Template

For each problem solved, I document my thought process using the following template:

```
#### [Problem Number]. [Problem Name]

- **Difficulty:** Easy / Medium / Hard
- **Topics:** Array, Two Pointers, Hash Table, etc.
- **LeetCode Link:** [Problem Link](#)

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

```

---

## Notes

### What is an Edge Case?
An edge case is a problem, scenario, or set of input data that occurs at an extreme boundary of an operating limit. In software engineering and coding interviews, edge cases represent situations where the code is most likely to fail or produce unexpected results because the input deviates from typical, "happy path" usage.

Identifying and handling edge cases ensures that your code is robust, defensive, and handles unusual inputs gracefully (such as returning an empty result, throwing a clear exception, or processing boundary values correctly) rather than crashing or causing memory leaks.

#### Common Types of Edge Cases

| Category | Description | Example Scenarios |
| :--- | :--- | :--- |
| **Empty or Null Inputs** | Missing, uninitialized, or empty collections/structures. | `nums = []`, `str = ""`, or `head = null` |
| **Single-Element Inputs** | Minimum possible input size or length. | `nums = [1]` or a single-node tree/list |
| **Boundaries & Limits** | Values at the exact maximum or minimum numerical thresholds. | Extreme array lengths ($10^5$), integer limits (`INT_MAX`, `INT_MIN`) |
| **Duplicates & Repetition** | Datasets containing identical elements or uniform repeated values. | `nums = [2, 2, 2, 2]`, target = 4 |
| **Special Values / Signs** | Negative numbers, zeros, floating-point precision, or non-alphanumeric chars. | `nums = [-5, 0, 5]`, strings containing whitespace/punctuation |
| **Ordering & Structure** | Inputs that are already fully ordered, reverse-sorted, or cyclic. | Searching in a pre-sorted array, linked lists with cycles |

---
