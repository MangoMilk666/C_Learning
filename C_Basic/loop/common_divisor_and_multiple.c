//求m,n的最大公约数和最小公倍数
#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n); //m<n<=1000
    //最大公约数
    for (i=m; i>=1; i--)
    {
        if (m%i == 0 && n%i == 0)
        {
            printf("Biggest common divisor: %d\n", i);
            break;
        }
    }

    //最小公倍数
    for (j=n; j<=n*m; j++)
    {
        if (j%n == 0 & j%m == 0)
        {
            printf("Smallest common multiple is: %d\n", j);
            break;
        }
    }
    return 0;
}