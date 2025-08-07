class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
        
        unplaced = 0

        for i in fruits:
            idx = -1

            for j in range(len(baskets)):
                if baskets[j] >= i:
                    idx = j
                    break

            if idx == -1:
                unplaced += 1
            else:
                del baskets[idx]
        return unplaced

        
            
