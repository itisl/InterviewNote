class Solution:
	def letterCombinations(self, digits):
		n = int(digits[0])
		print(n)
		if len(digits) == 1:
			return [_ for _ in l_map[n]]
		dst = []
		temp = self.letterCombinations(digits[1:])
		for s in l_map[n]:
			for e in temp:
				dst.append(s + e)
		return dst

l_map = [" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]

s = Solution()
print(s.letterCombinations("123"))
