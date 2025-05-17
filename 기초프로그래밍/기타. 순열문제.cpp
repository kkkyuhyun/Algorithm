#include <stdio.h>
int main()
{
    int n, k;
    long fact1 = 1, fact2 = 1;
    long p = 0;

    printf("조건: n>k\n");
    printf("n을 입력하시오:");
    scanf("%d", &n);
    printf("k를 입력하시오:");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++)
    {
        fact1 *= i;
    }

    for (int i = 1; i <= n - k; i++)
    {
        fact2 *= i;
    }

    p = fact1 / fact2;
    printf("nPk는 %d입니다.", p);
	return 0;
}
