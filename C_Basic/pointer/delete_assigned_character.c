#include <stdio.h>
#include <string.h>
void delchar(char s[], char c);
int main()
{
    char s[32];
    char ch;
    gets(s);
    //Use scanf cautiously, say, scanf("%s\n", s);
    scanf("%c", &ch);
    delchar(s, ch);
    puts(s);
    return 0;
}

void delchar(char s[], char c)
{
    int i, len, j=0;
    char newchar[32];
    len = strlen(s);
    for (i=0; i<len; i++)
    {
        if (s[i] == c)
        {
            continue;
        }
        else
        {
            newchar[j] = s[i]; 
            j++;
        }
    }
    for (i=0; i<len; i++)
    {
        if (i<j)
            s[i] = newchar[i];
        else if (i>=j) //剩下的原来还多的空间放\0
            s[i] = '\0';
    }
}