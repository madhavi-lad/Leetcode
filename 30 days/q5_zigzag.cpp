#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        // numsRows = key

        int n = s.length();

        if(numRows==1 || n<=numRows)
            return s;

        string result = "";

        vector <string> ct(numRows);

        int row = 0, dir = 1, col=0;

        for(char ch : s){
            ct[row] += ch;

            if(row == 0)
                dir = 1;
            else if(row == numRows-1)
                dir = -1;

            row += dir;
        }

        for(string& str : ct){
            result += str;
        }
        
        return result;
    }
};