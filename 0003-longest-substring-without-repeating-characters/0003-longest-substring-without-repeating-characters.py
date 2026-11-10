class Solution(object):
    def lengthOfLongestSubstring(self, s):
        maxl, starti = 0, 0
        last_seen = [-1] * 128

        for i in range(len(s)):
            value = ord(s[i])

            if last_seen[value] >= starti:
                starti = last_seen[value] + 1

            last_seen[value] = i

            currl = i - starti + 1
            maxl = max(maxl, currl)

        return maxl