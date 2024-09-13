class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        ArrayList<Boolean> result=new ArrayList<Boolean>();
        int maxCandies=0;

        for(int i=0;i<candies.length;i++){
            if(candies[i]>maxCandies){
                maxCandies=candies[i];
            }
        }

        int totCandiesAKidHave=0;
        
        for(int i=0;i<candies.length;i++){
            totCandiesAKidHave=candies[i]+extraCandies;

            if(totCandiesAKidHave>=maxCandies){
                result.add(true);
            }
            else{
                result.add(false);
            }
        }

        return result;
    }
}