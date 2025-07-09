#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector <int> result;
        int n = nums.size();

        for(int i=0; i<n; i++){
            bool found = false;

            for(int j=i+1; j<n; j++){

                if((nums[i] + nums[j]) == target){
                    found = true;
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }

            
        }
        return result;
    }
};