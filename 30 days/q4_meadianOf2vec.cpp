#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merge both vectors in nums1
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());

        int n = nums1.size();

        if(n % 2 ==0){  //size is even
            int x = n/2;
            int y = n/2 - 1;

            double ans = double((nums1[x] + nums1[y])) / 2;
            return ans;
        }
        else{
            int x = n/2;

            return nums1[x];
        }
    }
};