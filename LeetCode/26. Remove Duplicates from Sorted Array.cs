public class Solution {
    public int RemoveDuplicates(int[] nums) 
    {
        int result =0;
        int top= 0;
        for(int i=0;i<nums.Length;i++)
        {
            if(i == 0)
            {
                top = nums[i];
                result ++;
            }
            else if(top != nums[i])
            {
                top = nums[i];
                nums[result] = nums[i];
                result ++;
            }
            
        }
        return result;
    }
}
