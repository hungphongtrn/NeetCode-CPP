#include <iostream> 
#include <unordered_set> 
#include <vector>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Create hash table
        unordered_set<int> hashTable;

        for (int i=0; i<nums.size(); i++) {
            // Check if the element is already in the hash table
            if (hashTable.find(nums[i]) != hashTable.end()) {
                return true;
            }
            // Insert the element into the hash table
            else {
                hashTable.insert(nums[i]);
            }
        }
        return false;
    }
};
