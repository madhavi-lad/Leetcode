class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack.size() < needle.size())
            return -1;

        int n = needle.size();
        string result="";

        for(int i=0, itr=0; i<haystack.size(); i++){

            if(haystack[i] != needle[itr])
                continue;
            
            else{
                int j = i;
                while(n--){
                    
                    if(haystack[j] != needle[itr]){
                        itr=0;
                        n = needle.size();
                        result = "";
                        break;
                    }
                        
                    else{
                        result += haystack[j++];
                        itr++;
                    }
                }
                if(result == needle)
                    return i;
            }
        }
        return -1;
    }
};