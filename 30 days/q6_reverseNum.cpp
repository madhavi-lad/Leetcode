#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {

        int num=x, digit=0, rev=0;

        while(num != 0){
            digit = num % 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;

            rev = rev * 10 + digit;
            num /= 10;
        }



        return rev;
    }
};