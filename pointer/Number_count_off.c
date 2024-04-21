//围成一圈报数,约瑟夫环
#include <stdio.h>

int main()
{
    int m, n, i=1, remain=n;
    scanf("%d %d", &n, &m);
    int origin_index[n];
    int id[n]; //identify the people left
    for (i=1; i<=n; i++)
    {
        origin_index[i] = i;
        id[i] = 1;
    }
    game();
    //until last one person left
    return 0;
}

void game(int origin_index[], int id[], int remain, int m)
{
    int start=1, end=1, count;
    
    while (remain > 1)
    {
        if (m > remain)
        {
            m %= remain;
        }

        if (id[start] == 1)
        {
            count++;
        }
        start++;
        //skip the ousted people;

        if (count == m)
        {
            end = start;
            id[end] = 0;
            start = end + 1;
            remain --;
            printf("%d", origin_index())
        }

    }
}