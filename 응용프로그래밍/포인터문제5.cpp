#include <stdio.h>
void f(int *a,int *b,int *c)
{
	int temp=*a;
	*a=*b;
	*b=*c;
	*c=temp;
}
int main()
{
	int a=10,b=20,c=30;
	f(&a,&b,&c);
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	return 0;
}
