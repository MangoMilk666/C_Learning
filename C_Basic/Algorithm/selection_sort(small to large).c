//选择法排序：输入n个整数，将其从小到大排序后输出
//每一步，在剩下的n-k个数里面找出最小的数，将其与a[k]交换
#include <stdio.h>
#define MAXN 32
void selection(int nums[], int n);
void swap(int *pi1, int *pi2);
int main()
{
    int n, i;
    int nums[MAXN];
    printf("How many numbers to be entered:");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
    selection(nums, n);
    printf("After sorting:\n");
    for (i=0; i<n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}

void selection(int nums[], int n)
{
    //params: array name as pointer, 待排序数数量
    int i, j, *min;
    for (i=0; i<=n-1; i++) 
    {
        min = &nums[i];
        for (j=i+1; j<=n-1; j++)
        {
            if (nums[j] < *min)
                min = &nums[j];
        }
        swap(&nums[i], min);
    }
}

void swap(int *pi1, int *pi2)
{
    //通过两个指针交换指向的值
    int middle;
    if (*pi1 > *pi2)
    {
        middle = *pi1;
        *pi1 = *pi2;
        *pi2 = middle;
    }
}