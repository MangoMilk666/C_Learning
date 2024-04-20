#include <stdio.h>
void month_day(int year, int yearday, int *pmonth, int *pday);

int main()
{
    int year, yearday, month, day;
    scanf("%d %d", &year, &yearday);
    month_day(year, yearday, &month, &day);
    printf("%d-%d-%d", year, month, day);
    return 0;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int leap, whichmonth=0;
    int date[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
                    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    //闰年，影响二月判定
    if ((year%4==0 && year%100 !=0) || year%400 == 0)
        leap = 1;
    else
        leap = 0;
    
    //根据年份减去月份总天数，算月份
    while (1)
    {
        if (yearday>=1 && yearday <= date[leap][whichmonth])
        {
            break;
        }
        yearday -= date[leap][whichmonth];
        whichmonth++;
    }
    *pmonth = whichmonth;
    *pday = yearday;
}

