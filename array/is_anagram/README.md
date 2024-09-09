# Is Anagram

## Problem

Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

```md
Input: s = "racecar", t = "carrace"
Output: true
```

Example 2:

```md
Input: s = "jar", t = "jam"

Output: false
```

## Learnings

- Using unordered_map in cpp: 

```cpp
#include <unordered_map>
std::unordered_map<type, type> hashTable;
```

- Get all pair (key, value) from unordered_map:

```cpp
for (auto pair : hashTable) {
    key = pair.first;
    value = pair.second;
}
```
