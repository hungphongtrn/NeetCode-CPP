#include<string>
#include<unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> count_S;
        std::unordered_map<char, int> count_T;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i=0; i < s.size(); i++) {
            count_S[s[i]]++;
            count_T[t[i]]++;
        }

        // compare the two hash tables by get all keys from count_S
        // and check if the value of the key in count_S is equal to the value of the key in count_T
        for (auto pair : count_S) {
            if (count_T.find(pair.first) == count_T.end() || count_T[pair.first] != pair.second) {
                return false;
            }
        }
    }
};