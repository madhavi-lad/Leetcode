// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {

        vector <int> a;   //to store digit 
        vector <int> b; // to store base

        int num=x, i=0;

        while(num > 0){
            int x = num % 10;
            int y = i;
            a.push_back(x);
            b.push_back(y);
            num /= 10;
            i++;
        }

        reverse(b.begin(), b.end());

        int n = a.size(), ans=0;
        i=0;
        
        while(n){
            
            ans += a[i] * static_cast<int>(pow(10,b[i])+0.5);
            cout<<ans<<endl;
            i++;
            n--;
        }
        
        return ans;
    }

int main() {
    // Write C++ code here
    
    cout<<reverse(123);

    return 0;
}