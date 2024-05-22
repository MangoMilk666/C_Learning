//冒泡排序：输入n个正整数，将它们从小排序后输出
#include <stdio.h>
#define MAXN 32
void swap(int *pi1, int *pi2);
void bubble(int nums[], int n);
int main()
{
    int i, n;
    int nums[MAXN];
    printf("How many numbers to be entered:");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
    bubble(nums, n);
    for (i=0; i<n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}

void bubble(int nums[], int n)
{
    int i, j;
    for (i=1; i<n; i++)
    {
        //i代表正在进行第i次冒泡，已经完成的次数为i-1，已经将最大的i-1个数放在最后面
        for (j=0; j<n-i;j++)
        {
            if (nums[j] > nums[j+1])
            {
                //额外调用函数swap，参数是两个数的地址，继而将大的值放在后面的地址
                swap(&nums[j], &nums[j+1]);
            }
        }
    }
}

void swap(int *pi1, int *pi2)
{
    int middle;
    //比较两个指针指向的两个变量的值
    if (*pi1 > *pi2)
    {
       middle = *pi1;
       *pi1 = *pi2;
       *pi2 = middle;
    }
}