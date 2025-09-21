// 14. Longest Common Prefix
// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty() || strs.size() == 0) return "";

        string prefix = strs[0];

        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0,prefix.length()-1);

                if(prefix.length() == 0) return "";
            }
        }
        return prefix;
    }
};


//Python Code

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        min_len = float('inf')
        for s in strs:
            if len(s) < min_len:
                min_len = len(s)

        i = 0
        while i < min_len:
            for s in strs:
                if s[i] != strs[0][i]:
                    return s[:i]
            i += 1

        return s[:i]

