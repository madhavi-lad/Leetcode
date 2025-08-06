class Solution:
    def climbStairs(self, n: int) -> int:
        if n > 45 or n  < 1:
            return 0

        if n == 1 or n == 2:
            return n

        a = 1
        b = 2

        for _ in range(3, n+1):
            a, b = b, a+b
        return b

        