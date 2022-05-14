public class Solution {
    public bool ContainsDuplicate(int[] nums) 
    {
        int [] newArray = nums.Distinct().ToArray();
        if(newArray.Length == nums.Length)
            return false;
        else
            return true;
    }
}
