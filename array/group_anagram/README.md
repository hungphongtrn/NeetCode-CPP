# Group Anagrams

## Problem

Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: strs = ["act","pots","tops","cat","stop","hat"]

Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
Example 2:

Input: strs = ["x"]

Output: [["x"]]
Example 3:

Input: strs = [""]

Output: [[""]]

## Learning

- For task involving grouping things in common, we can use a dictionary to store the groups. Indeed, the key will be the common property and the value will be the list of elements that have this property.

- When decrease a character with another character, we will decrease using the ASCII code of the character. This will allow us to have a unique key for each anagram.

```cpp
freq[c - 'a']++; // Increase the frequency of the character c
```

- The difference between `auto`, `auto&` and `auto const &`:
        - Choose auto x when you want to work with copies. --> Create a copy of the original item.
        - Choose auto &x when you want to work with original items and may modify them. --> Reference to the original item.
        - Choose auto const &x when you want to work with original items and will not modify them. --> Reference to the original item but cannot modify it.
