#include <stdio.h>
int f(int x)
{
	return x*10;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",f(a));
	return 0;
}
