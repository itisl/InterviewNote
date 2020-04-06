class Solution:
    l_map = [" ", "", "abc", "def","ghi", "jkl","mno", "pqrs", "tuv","wxyz"]
    def letterCombinations(self, digits: str) -> List[str]:
        if len(digits) == 0:
            return []
        dst = []
        for e in self.letterCombinations(digits[1:]):
            for s in l_map[int(digits[0])]
                dst.append(s + e)
        
        return dst