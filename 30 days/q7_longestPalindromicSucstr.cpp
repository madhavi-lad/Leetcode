#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    string longestPalindrome(string s) {
        int start = 0, maxLen = 1;
        int n = s.size();

        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            return right - left - 1; // length of palindrome
        };


        for(int i=0; i<n; i++){

            int len1 = expandAroundCenter(i, i);
            int len2 = expandAroundCenter(i, i+1);
            int len = max(len1, len2);

            if(len > maxLen){
                maxLen = len;
                start = i - (len-1)/2;
            }
        }
        return s.substr(start, maxLen);


    }
};