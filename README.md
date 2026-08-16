# 🧩 LeetCode Knowledge Dashboard & Solutions

<p align="center">
  <img src="https://img.shields.io/badge/LeetCode-Solutions-orange?style=for-the-badge&logo=leetcode&logoColor=white" />
  <img src="https://img.shields.io/badge/Total%20Solved-21-brightgreen?style=for-the-badge&logo=github" />
  <img src="https://img.shields.io/badge/Primary%20Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" />
  <img src="https://img.shields.io/badge/Sync-LeetSync-ff69b4?style=for-the-badge" />
</p>

> Personal competitive programming archive containing accepted LeetCode solutions, deep topic-wise knowledge analysis, and automated metadata tracking via **[LeetSync](https://github.com/shivinders12/LeetSync)**.

---

## 📊 Problem Solving Statistics

<div align="center">

| Difficulty | Count | Ratio | Visual Progress |
| :--- | :---: | :---: | :--- |
| 🟢 **Easy** | **14** | 66.7% | `██████████████░░░░░░` |
| 🟡 **Medium** | **6** | 28.6% | `██████░░░░░░░░░░░░░░` |
| 🔴 **Hard** | **1** | 4.7% | `█░░░░░░░░░░░░░░░░░░░` |
| 🏆 **Total** | **21** | 100% | `████████████████████` |

</div>

---

## 🧠 Deep Knowledge & Skill Analysis

### 🎯 1. Arrays & Hashing *(Proficiency: 85% • Strong Foundation)*
* **Key Patterns Mastered**: In-place array mutation, Hash Table lookup ($O(1)$ amortized time), frequency counting, prefix sums, and Dutch National Flag algorithm.
* **Featured Solved Problems**:
  * `0001. Two Sum` — Hash mapping ($O(N)$ time, $O(N)$ space).
  * `0075. Sort Colors` — 3-Way Partitioning / Dutch National Flag Algorithm ($O(N)$ time, $O(1)$ space).
  * `0238. Product of Array Except Self` — Prefix & Suffix products without division ($O(N)$ time, $O(1)$ space).
  * `0169. Majority Element` — Boyer-Moore Voting Algorithm ($O(N)$ time, $O(1)$ space).

---

### ⚡ 2. Two Pointers & Fast-Slow Pointers *(Proficiency: 78% • Advanced)*
* **Key Patterns Mastered**: Shrinking windows, multi-pointer traversal, boundary trapping, and cycle detection.
* **Featured Solved Problems**:
  * 🔴 `0042. Trapping Rain Water` — Two-pointer elevation trapping ($O(N)$ time, $O(1)$ space).
  * `0031. Next Permutation` — Lexicographical permutation scan & swap ($O(N)$ time).
  * `0189. Rotate Array` — Triple array reversal technique ($O(N)$ time, $O(1)$ space).

---

### 📈 3. Dynamic Programming & Greedy Algorithms *(Proficiency: 70% • Intermediate)*
* **Key Patterns Mastered**: Subarray optimization, state preservation, Kadane's Maximum Subarray algorithm, and single-pass profit maximization.
* **Featured Solved Problems**:
  * `0053. Maximum Subarray` — Kadane's Algorithm ($O(N)$ time, $O(1)$ space).
  * `0121. Best Time to Buy and Sell Stock` — Single-pass running minimum tracking ($O(N)$ time).

---

### 🔍 4. Binary Search & Logarithmic Search *(Proficiency: 80% • Solid)*
* **Key Patterns Mastered**: Search space reduction, lower bound / upper bound insertion points, and binary search on sorted arrays.
* **Featured Solved Problems**:
  * `0704. Binary Search` — Standard logarithmic divide & conquer ($O(\log N)$ time).
  * `0035. Search Insert Position` — Lower bound insertion index matching ($O(\log N)$ time).

---

## 📁 Complete Problem Index

| # | Problem Title | Difficulty | Language | Category | Solution Folder |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 0001 | [Two Sum](https://leetcode.com/problems/two-sum/) | 🟢 Easy | C++ | Hash Table | [`0001-two-sum`](./0001-two-sum/) |
| 0026 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | 🟢 Easy | C++ | Two Pointers | [`0026-remove-duplicates-from-sorted-array`](./0026-remove-duplicates-from-sorted-array/) |
| 0031 | [Next Permutation](https://leetcode.com/problems/next-permutation/) | 🟡 Medium | C++ | Two Pointers | [`0031-next-permutation`](./0031-next-permutation/) |
| 0035 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | 🟢 Easy | C++ | Binary Search | [`0035-search-insert-position`](./0035-search-insert-position/) |
| 0042 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | 🔴 Hard | C++ | Two Pointers / DP | [`0042-trapping-rain-water`](./0042-trapping-rain-water/) |
| 0053 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | 🟡 Medium | C++ | Kadane's / DP | [`0053-maximum-subarray`](./0053-maximum-subarray/) |
| 0075 | [Sort Colors](https://leetcode.com/problems/sort-colors/) | 🟡 Medium | C++ | 3-Pointer / Sorting | [`0075-sort-colors`](./0075-sort-colors/) |
| 0088 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | 🟢 Easy | C++ | Two Pointers | [`0088-merge-sorted-array`](./0088-merge-sorted-array/) |
| 0121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | 🟢 Easy | C++ | Dynamic Programming | [`0121-best-time-to-buy-and-sell-stock`](./0121-best-time-to-buy-and-sell-stock/) |
| 0136 | [Single Number](https://leetcode.com/problems/single-number/) | 🟢 Easy | C++ | Bit Manipulation | [`0136-single-number`](./0136-single-number/) |
| 0169 | [Majority Element](https://leetcode.com/problems/majority-element/) | 🟢 Easy | C++ | Boyer-Moore Voting | [`0169-majority-element`](./0169-majority-element/) |
| 0189 | [Rotate Array](https://leetcode.com/problems/rotate-array/) | 🟡 Medium | C++ | Two Pointers | [`0189-rotate-array`](./0189-rotate-array/) |
| 0238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | 🟡 Medium | C++ | Prefix Sum | [`0238-product-of-array-except-self`](./0238-product-of-array-except-self/) |
| 0268 | [Missing Number](https://leetcode.com/problems/missing-number/) | 🟢 Easy | C++ | Bit Manipulation | [`0268-missing-number`](./0268-missing-number/) |
| 0283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | 🟢 Easy | C++ | Two Pointers | [`0283-move-zeroes`](./0283-move-zeroes/) |
| 0303 | [Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/) | 🟢 Easy | C++ | Prefix Sum | [`0303-range-sum-query-immutable`](./0303-range-sum-query-immutable/) |
| 0485 | [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/) | 🟢 Easy | C++ | Array Traversal | [`0485-max-consecutive-ones`](./0485-max-consecutive-ones/) |
| 0704 | [Binary Search](https://leetcode.com/problems/binary-search/) | 🟢 Easy | C++ | Binary Search | [`0704-binary-search`](./0704-binary-search/) |
| 0977 | [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/) | 🟢 Easy | C++ | Two Pointers | [`0977-squares-of-a-sorted-array`](./0977-squares-of-a-sorted-array/) |
| 1752 | [Check if Array Is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/) | 🟢 Easy | C++ | Array Traversal | [`1752-check-if-array-is-sorted-and-rotated`](./1752-check-if-array-is-sorted-and-rotated/) |
| 2149 | [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/) | 🟡 Medium | C++ | Two Pointers | [`2149-rearrange-array-elements-by-sign`](./2149-rearrange-array-elements-by-sign/) |

---

## 📄 Master CSV Tracking

All submission records are appended in real-time to the master spreadsheet: [`submissions.csv`](./submissions.csv).

---

*Automatically synced with ❤️ using [LeetSync](https://github.com/shivinders12/LeetSync)*
