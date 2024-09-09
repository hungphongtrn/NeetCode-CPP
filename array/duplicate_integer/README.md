# Duplicate Integer

## Problem

Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

```md
Input: nums = [1, 2, 3, 3]
Output: true
```

Example 2:

```md
Input: nums = [1, 2, 3, 4]
Output: false
```

## Learnings

- Using set in cpp: 

```cpp
#include <unordered_set> 

unordered_set<type> hashTable;
```

- Find element in set: It returns an iterator to the element if found, else returns an iterator pointing to *the end of unordered_set.*

```cpp
unordered_set_name.find(key)
```

- Insert element in set: It inserts an element in the unordered_set if that element is not already present in the unordered_set.

```cpp
unordered_set_name.insert(key)
```
