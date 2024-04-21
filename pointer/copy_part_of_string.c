#include <stdio.h>

void strmcpy(char *s, char *t, int m);
int main()
{
    char t[80], s[80];
    int m;
    gets(t);
    scanf("%d", &m);
    strmcpy(s, t, m);
    printf("%s", s);
    return 0;
}

void strmcpy(char *s, char *t, int m)
{
    int i, j=0;
    for (i=m; i++; )
    {
        if (*(t+i) != '\0')
        {
            *(s+j) = *(t+i);
            j++;
        }
            
        else
            break;
    }



}