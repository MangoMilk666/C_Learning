//递归实现顺序输出整数
#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

void printdigits(int n)
{
    int d_n = n;
    if (d_n>=0 && d_n <=9)
        printf("%d\n", d_n);
    else if (d_n >= 10)
    {
        printdigits(d_n/10);
        printdigits(d_n%10);
    }
}