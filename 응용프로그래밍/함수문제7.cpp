#include <stdio.h>
long long int f(int x)
{
	long long mul=1;
	for(int i=1;i<=x;i++)
		mul*=i;
	
	return mul;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%lld",f(a));
	return 0;
}
