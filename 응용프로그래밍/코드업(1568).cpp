#include <stdio.h>
int maxi(int a, int b, int *d) //int d[]
{
	int max=-2147483648;
	int pos;
	for(int i=a;i<=b;i++)
	{
		if(max < *(d+i))     //if(max < d[i]
			{
				max=*(d+i);  //max=d[i];
				pos=i;
			}
	}
	return pos;
}
int main()
{
  int n, a, b, d[1010]={0};

  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b,d));
}
