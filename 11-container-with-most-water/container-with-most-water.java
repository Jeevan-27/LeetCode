class Solution {
    public int maxArea(int[] height) {
        int l=0,r=height.length-1;
        int area=0;

        while(l<r){
            int temp=0;
            if(height[l]<height[r]){
                temp=height[l]*(r-l);
                l++;
            }
            else{
                temp=height[r]*(r-l);
                r--;
            }

            if(temp>area){
                area=temp;
            }
        }
        return area;
    }
}