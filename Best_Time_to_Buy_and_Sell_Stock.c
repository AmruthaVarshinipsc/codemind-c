#include<stdio.h>
int maxProfit(int prices[], int n)
{
	int buy = prices[0], max_profit = 0;
	for (int i = 1; i < n; i++) {

		if (buy > prices[i])
			buy = prices[i];

		else if (prices[i] - buy > max_profit)
			max_profit = prices[i] - buy;
	}
	return max_profit;
}

int main()
{
	int prices[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&prices[i]);
	}
	int max_profit = maxProfit(prices, n);
	printf("%d",max_profit);
	return 0;
}
