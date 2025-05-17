#include <stdio.h>
int f(int x)
{
	int sum=0;
	for(int i=1;i<=x;i++)
		sum+=i;
	
	return sum;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",f(a));
	return 0;
}
