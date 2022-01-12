public class Solution 
{
    public int[] TwoSum(int[] nums, int target) 
    {
        int[] result = new int[2];
        for(int i=0;i<nums.Length-1;i++)
        {
            for(int j=i+1;j<nums.Length;j++)
            {
                int t = nums[j]+nums[i];
                if (t==target)
                {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
        return result;
    }
}
