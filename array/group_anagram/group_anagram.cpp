#include<vector>
#include<string>
#include<unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        int number_of_words = strs.size();
        std::unordered_map<std::string, std::vector<std::string>> anagram_map;
        std::vector<std::vector<std::string>> anagrams;

        for (int i = 0; i < number_of_words; i++) {
            // Create a vector of size 26 to store the frequency of each character
            std::vector<int> freq(26, 0);
            for (char c: strs[i]) {
                freq[c - 'a']++;
            }

            // Create a string key to store the frequency of each character
            std::string key = "";

            // Create a string to store the frequency of each character
            for (int i : freq) {
                key += "#" + std::to_string(i);
            }

            anagram_map[key].push_back(strs[i]);
        }

        // Get the values, which will be the grouped anagrams
        for (auto pair : anagram_map) {
            anagrams.push_back(pair.second);
        }

        return anagrams;
    }
};
