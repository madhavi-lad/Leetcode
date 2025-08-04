class Solution:
    def mySqrt(self, x: int) -> int:
        
        if x < 2 and x >= 0:
            return x

        left = 0
        right = x

        while(left <= right):
            mid = (left + right) // 2

            if mid*mid == x:
                return mid
            elif mid*mid > x:
                right = mid - 1
            else:
                left = mid + 1

        return right
