class Solution:
    def letterCombinations(self, digits: str):
        n = int(digits[0])
        if len(digits) == 1:
            return [_ for _ in l_map[n]]
        dst = []
        for e in self.letterCombinations(digits[1:]):
            for s in l_map[int(digits[0])]:
                dst.append(s + e)
        
        return dst

l_map = [" ", "", "abc", "def","ghi", "jkl","mno", "pqrs", "tuv","wxyz"]

s = Solution()
print(s.letterCombinations("12"))
