class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows==1:
            return s
        new_s = ""
        for i in range(numRows):
            x = i
            jump = (numRows-i-1)*2
            if i == numRows-1:
                jump = (numRows-1)*2
            while x<len(s):
                new_s+=s[x]
                x+=jump
                if i != 0 and i != numRows-1:
                    jump = (numRows-1)*2 - jump
        return new_s