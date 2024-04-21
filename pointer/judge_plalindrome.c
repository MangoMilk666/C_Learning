//判断回文,输入的字符串中途无空格

#include <stdio.h>
#include <string.h>

int main()
{
    char ch, s[80], *p, *q;
    int i, j, n;
    printf("Enter the string:");
    //扫描接受输入的字符串到数组s；
    gets (s);
    //将数组首地址赋予p；
    p = s;
    
    //ignore the ' ' among string
    while (*p == ' ')
    {
        p++;
    }
    // the effective length of s
    n = strlen(s);

    //same way to ignore ' ' at th end
    q = &s[n-1];
    while (*q == ' ')
    {
        q--;
    }
    
    //compare chaaracters
    while (*p == *q && p <= q)  
    {
        p++;
        q--;
    }
    // if end with non-plalindrome(end despite p<q) 
    if (p<q)
        printf("No\n");
    else // end with p>=q, is-plaindrome
        printf("Yes\n");
    return 0;
}