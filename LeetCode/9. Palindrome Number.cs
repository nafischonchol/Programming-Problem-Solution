//https://leetcode.com/problems/palindrome-number/

public class Solution {
    public bool IsPalindrome(int x) {
        
        string s = x.ToString();
        StringBuilder s1 = new StringBuilder(s);
        int index = 0;
        for(int i= s.Length-1; i>=0; i--)
        {
            s1[index++] = s[i]; 
        }
    
        if (s1.ToString() == s)
            return true;
        else
            return false;
    }
}
