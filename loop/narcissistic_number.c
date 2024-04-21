//输出所有的n位水仙花数,153 = 1^3 + 5^3 + 3^3
#include <stdio.h>
#include <math.h>
int qualified(int n);
int main()
{
    int n, i; //3<=n<=7
    scanf("%d", &n);
    for (i = pow(10, n-1); i<pow(10, n); i++)
    {
        if (qualified(i) == 1)
            printf("%d\n", i);
    }
    return 0;
}

int qualified(int n)
{
    int i, compare=10, k=1;
    int sum=0, remain=n;
    //求位数k
    while (n >= compare)
    {
        k++;
        compare *= 10;
    }

    //各位数字求和
    while (remain != 0)
    {
        sum += pow(remain%10, k);
        remain /= 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}