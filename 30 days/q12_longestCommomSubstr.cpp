#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        if(strs.empty())
            return "";

        if(n == 1)
            return strs[0];

        string prefix = strs[0];

        for(int i=0; i<prefix.size(); i++){

            char c = prefix[i];

            for(int j=0; j<strs.size(); j++){
                if(i == strs[j].size() || strs[j][i] != c)
                    return prefix.substr(0, i);
            }
        }
        return prefix;
    }
};