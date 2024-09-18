class Solution {
    public int reverse(int x){
        int rem,rev=0;
        while(x!=0){
            rem=x%10;
            rev=(rev*10)+rem;
            x/=10;
        }

        return rev;
    }

    public boolean isPalindrome(int x) {
        int y=reverse(x);

        if(x<0){
            return false;
        }

        if(x==y){
            return true;
        }

        return false;   
    }
}