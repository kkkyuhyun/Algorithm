#include <stdio.h>
int GetSum(int from, int to)
{
	int sum=0;
	for(int i=from;i<=to;i++)
		sum+=i;
	
	return sum;
}
int main()
{
	printf("%d\n",GetSum(1,10));
	printf("%d\n",GetSum(11,20));
}
