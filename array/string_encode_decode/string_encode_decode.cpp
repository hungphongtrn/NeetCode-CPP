#include <string>
#include <vector>

class Solution {
public:
    std::string encode(std::vector<std::string>& strs) {
        std::string res;
        for (auto str : strs) {
            res += std::to_string(str.size()) + "#" + str;
        }
        return res;
    }

    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> res;
        int i = 0;
        while (i < s.size()) {
            // Using 2 pointers to find each part of the original strs
            int j = i;
            while(s[j] != '#') {
                j++;
            }
            // length -> # -> string
            int len = std::stoi(s.substr(i, j - i));
            std::string str = s.substr(j + 1, len);
            res.push_back(str);
            i = j + len + 1;   
        }
        return res;
    };
};
