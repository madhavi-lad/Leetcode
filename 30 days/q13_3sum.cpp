// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector <vector <int>> ans;
        

        if( n < 3 || n > 3000)
            return ans;

        for(int i=0; i<n-2; i++){

            if(i > 0 && nums[i] == nums[i-1])
                continue;

            int left = i+1, right = n-1;

            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left-1])
                        left++;

                    while(left < right && nums[right] == nums[right+1])
                        right--; 
                }
                else if(sum < 0){
                    left++;
                }
                else{
                    right--;
                }
            }  
        }
        return ans;
    }
};

