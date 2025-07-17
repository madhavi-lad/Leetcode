#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 )
            return false;

        int num = x, rev=0;

        while(num > 0){
            int digit = num % 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return false;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return false;

            rev = rev*10 + digit;
            num /= 10;
        }
        return (x == rev) ? true : false;
    }
};