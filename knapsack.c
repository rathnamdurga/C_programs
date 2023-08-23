#include <stdio.h>
int max(int a, int b) { return (a > b) ? a : b; }
int knapSack(int m, int wt[], int profit[], int n)
{
	if (n == 0 || m == 0)
		return 0;
	if (wt[n - 1] > m)
		return knapSack(m, wt, profit, n - 1);
	else
		return max(
			profit[n - 1]
				+ knapSack(m - wt[n - 1],
						wt, profit, n - 1),
			knapSack(m, wt, profit, n - 1));
}
int main()
{
	int profit[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	int m = 50;
	int n = sizeof(profit) / sizeof(profit[0]);
	printf("%d", knapSack(m, wt, profit, n));
	return 0;
}
