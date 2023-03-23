class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        l = []
        for i in range(0,n):
            s= str(i+1)
            l.append(s)
            if((i+1)%3==0):
                l[i]="Fizz"
            if((i+1)%5==0):
                l[i]="Buzz"
            if((i+1)%3==0 and (i+1)%5==0):
                l[i]="FizzBuzz"
        
        return l
            