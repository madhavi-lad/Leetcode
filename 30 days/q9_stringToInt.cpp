#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        
        int i=0, n = s.size(), sign=1;
        long result = 0;

        while(i<n && s[i]==' ')
            i++;

        if(i<n && (s[i]=='+' || s[i]=='-')){
            sign = (s[i]=='-') ? -1 : 1;
            i++;
        }

        while(i<n && isdigit(s[i])){
            result = result * 10 + (s[i] - '0');

            if (sign * result <= INT_MIN) return INT_MIN;
            if (sign * result >= INT_MAX) return INT_MAX;

            i++;
        }

        return sign*result;
    }
};