# String Encode and Decode

## Problem

Design an algorithm to encode a list of strings to a single string. The encoded string is then decoded back to the original list of strings.

Please implement encode and decode

Example 1:

Input: ["neet","code","love","you"]

Output:["neet","code","love","you"]
Example 2:

Input: ["we","say",":","yes"]

Output: ["we","say",":","yes"]

## Learning

- The main problem is that if we simply add delimiter to the string and then split it, it will not work if the delimiter is present in the string itself --> Design a way that the delimiter is unique and not present in the string itself

- Started with a random delimiter "#", how to make this unique? Add the string length before the string itself and then add the delimiter --> "string_length#string"