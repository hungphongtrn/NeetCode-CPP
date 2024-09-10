# Top K Elements in List

## Problem

Given an integer array nums and an integer k, return the k most frequent elements within the array.

The test cases are generated such that the answer is always unique.

You may return the output in any order.

Example 1:

Input: nums = [1,2,2,3,3,3], k = 2

Output: [2,3]
Example 2:

Input: nums = [7,7], k = 1

Output: [7]

## Learning

- Using a bucket(vector) with the index being the criteria for sorting. Therefore, we can iterate the bucket to get the top k elements.