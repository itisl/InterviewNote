class Solution:
    def letterCombinations(self, digits: str):
        if len(digits) == 0:
            return []
        dst = []
        for e in self.letterCombinations(digits[1:]):
            for s in l_map[int(digits[0])]:
                dst.append(s + e)
        
        return dst

l_map = [" ", "", "abc", "def","ghi", "jkl","mno", "pqrs", "tuv","wxyz"]
print(Solution.letterCombinations("12"))
