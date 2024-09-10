#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        // Create a frequency map
        std::unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Get the number of elements in nums
        int n = nums.size();

        // Create a vector of vectors to store the elements with the same frequency
        // Key: frequency, Value: vector of elements
        std::vector<std::vector<int>> bucket(n);

        // Fill the bucket
        for (auto& [value, frequency] : freq) {
            bucket[frequency-1].push_back(value);
        }

        // Create a vector to store the result
        std::vector<int> result;

        // Reversely iterate the bucket to get the top k elements
        for (int i = n-1; i >= 0; i--) {
            for (int j = 0; j < bucket[i].size(); j++) {
                result.push_back(bucket[i][j]);
                if (result.size() == k) {
                    return result;
                }
            }
        }
    }
};
