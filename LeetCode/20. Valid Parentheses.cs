public class Solution 
{
    public bool IsValid(string s) 
    {
         
        Stack stack = new Stack();
        for(int i=0;i<s.Length;i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.Push(s[i]);
            else if(stack.Count <= 0)
                return false;
            else
            {
                char c = (char) stack.Peek();
                if( ( s[i] == ')' && c != '(' ) ||  (s[i] == '}' && c != '{') ||  (s[i] == ']' && c != '['))
                   return false; 
                else
                    stack.Pop();
            }
        }
        if(stack.Count== 0)
            return true;
        else
            return false;
        
    }
}
