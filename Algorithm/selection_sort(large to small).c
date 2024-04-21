//选择法排序（从大到小）
//用指针
#include <stdio.h>
#define MAXN 32

void swap(int *pi1, int *pi2);
void big_to_small(int arr[], int n);
int main()
{
    int i;
    int n; //how many numbers to be sorted
    printf("How many numbers to be sorted:");
    scanf("%d", &n);
    
    //create the array
    int arr[MAXN];
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    big_to_small(arr, n);
    //输出
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void big_to_small(int arr[], int n)
{
    int i, *largest = NULL, j; //largest设为指针，方便用函数swap交换数值；
    for (i=0; i<= n-1; i++)
    {
        
        //假想（还没排序的）开头那个为最大，方便比较；
        largest = &arr[i];
        for (j=i+1; j<= n-1; j++)
        {
            if (arr[j] > *largest)
                largest = &arr[j];
        }
        //定义函数来交换数组中不同空间储存的值
        swap(largest, &arr[i]);
    }
}

void swap(int *pi1, int *pi2)
{
    int middle;
    middle = *pi1;
    *pi1 = *pi2;
    *pi2 = middle;
}
