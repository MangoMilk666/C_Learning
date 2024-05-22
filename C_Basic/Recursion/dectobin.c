//十进制转二进制
//e.g. input:10; output: 1010;
#include <stdio.h>
void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

void dectobin(int n)
{
    if (n==1 || n==0)
        printf("%d", n);
    else if (n>=2)
    {
        dectobin(n/2);
        dectobin(n%2);
    }
}