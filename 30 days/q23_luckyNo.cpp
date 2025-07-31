class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int n = arr.size();
        int lno = -1;

        for(int i=0; i<n; i++){

            int c = count(arr.begin(), arr.end(), arr[i]);

            /*for(int j=0; j<n; j++){
                if(arr[j] == arr[i])
                    count++;
            }*/

            

            if(c == arr[i] && c > lno)
                lno = c;
        }
        return lno;
    }
};