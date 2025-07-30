#include <algorithm>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();

        if( n < 0 || n > 100)
            return 0;


        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());

        
        return nums.size();
    }
};