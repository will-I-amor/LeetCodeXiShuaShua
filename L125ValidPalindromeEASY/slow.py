class Solution(object):
    def isPalindrome(self, astr):
        """
        :type s: str
        :rtype: bool
        """
        if(len(astr)==0 or len(astr)==1):
            return True
        a = []
        b = []
        flag = True
        for i in astr:
            if (i>='a' and i<='z'):
                a.append(i)
                b.append(i)
            if (i>='A' and i<='Z'):
                temp = ord(i)+32
                temp1 = chr(temp)
                a.append(temp1)
                b.append(temp1)
            if (i>='0' and i<='9'):
                a.append(i)
                b.append(i)
        j = 0
        print(a)
        while(flag and len(a)>0):
            if a.pop() == b[j]:
                j+=1
            else:
                flag = False
        return flag
