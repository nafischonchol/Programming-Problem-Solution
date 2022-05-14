public class Solution {
    public int MaxProfit(int[] prices) 
    {
        int minSoFar = int.MaxValue;
        int maxProfit = int.MinValue,profit = 0;
        for(int i=0;i<prices.Length;i++)
        {
            if(minSoFar > prices[i])
                minSoFar = prices[i];
            profit = prices[i] - minSoFar;
            Console.WriteLine(profit);
            if(profit > maxProfit)
                maxProfit = profit;
        }
        return maxProfit;
    }
}
