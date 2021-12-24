#include<stdio.h>
void main()
{
    int arr[5],i,j,key;
    printf("enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the unsorted array is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=1;i<5;i++)
    {
        key=arr[i];
        j = i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("sorted array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}
