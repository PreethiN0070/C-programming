#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,i,n;
    printf("enter the number of array elements:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr == NULL)
    {
        printf("memory allocation failed\n");
    }
    else
    {
        printf("enter the array elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("the array elements are:\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        free(arr);
    }
}
