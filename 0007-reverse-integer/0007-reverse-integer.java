class Solution {
    public int reverse(int x) {
        int h=Integer.MAX_VALUE,l=Integer.MIN_VALUE,ans=0;
        while(x!=0)
        {
            if(ans>h/10|| (ans==h/10&&x>7))
                return 0;
            if(ans<l/10|| (ans==l/10 && x<-8))
                return 0;
            ans=ans*10+x%10;
            x=x/10;
        }
        return ans;
    }
}