#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*arr,i,n;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      arr=(int*)malloc(n*sizeof (int));
    }
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
