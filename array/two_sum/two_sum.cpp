#include <vector>
#include <unordered_map>

class Solution {
    public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result(2);
        std::unordered_map<int, int> hashTable; 
        // key is the complement, value is the index of the number
        // so key + nums[value] = target

        for (int i=0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // If the complement is not in the hashtable
            if (hashTable.find(complement) != hashTable.end()) {
                result[0] = hashTable[complement];
                result[1] = i;
                return result;
            }
            hashTable[nums[i]] = i;
        }
    }
};