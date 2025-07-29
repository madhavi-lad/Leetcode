class Solution {
public:

    int countHillValley(vector<int>& nums) {
        
        int n = nums.size();

        if( n < 3 || n > 100)
            return 0;

        vector <int> arr;

        arr.push_back(nums[0]);
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1])
                arr.push_back(nums[i]);
        }
        
        int hill = 0;
        int valley = 0;

        for(int i=1; i<arr.size()-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
                hill++;


            if(arr[i] < arr[i-1] && arr[i] < arr[i+1])
                valley++;
    
        }

        return hill+valley;
    }
};