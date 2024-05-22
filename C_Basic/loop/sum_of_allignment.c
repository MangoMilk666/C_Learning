//求序列和
#include <stdio.h>

int main()
{
    int a, n, sum=0;
    int i, item=0;
    scanf("%d %d", &a, &n);
    for (i=1; i<=n; i++)
    {
        item = item*10 + a;
        sum += item;
        
    }
    printf("%d", sum);

    return 0;
}