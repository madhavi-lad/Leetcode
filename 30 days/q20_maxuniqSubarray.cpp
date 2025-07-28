// #3487
#include <bits/stdc++.h>

class Solution {
public:

    bool found(vector<int> ans, int a){
        for(auto &i : ans){
            if(i == a)
                return true;
        }
        return false;
    }

    bool check(vector <int> nums){
        for(auto i : nums){
            if(i >= 0)
                return false;
        }
        return true;
    }


    int maxSum(vector<int>& nums) {
        
        int n = nums.size();

        if(n<1 || n>100)
            return 0;

        if(check(nums)){
            int max = nums[0];

            for(auto v : nums){
                if(v > max)
                    max = v;
            }
            return max;
        }


        vector <int> ans(n);

        for(auto num : nums){
            if(!found(ans, num) && num > 0){
                ans.push_back(num);
            }
        }

        int sum=0;

        for(auto j : ans)
            sum += j;

        return sum;
        
        
    }
};