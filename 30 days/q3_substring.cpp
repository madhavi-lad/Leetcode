#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set <char> str;

        int left=0, maxLen=0;

        for(int right=0; right<s.length(); right++){
            while(str.find(s[right]) != str.end()){
                str.erase(s[left++]);
            }
            str.insert(s[right]);
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};