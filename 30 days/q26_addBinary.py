class Solution:
    def addBinary(self, a: str, b: str) -> str:
        l1 = len(a) - 1
        l2 = len(b) - 1
        carry = 0
        ans = ""

        while l1 >= 0 or l2 >= 0 :
            x = int(a[l1]) if l1 >= 0 else 0
            y = int(b[l2]) if l2 >= 0 else 0
            sum = x + y + carry
            ans = str(sum % 2) + ans
            carry = sum // 2
            l1 -= 1
            l2 -= 1
        

        if(carry):
            ans = "1" + ans; 

        return ans
