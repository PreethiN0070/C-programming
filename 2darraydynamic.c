#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r,c,i,j;
    printf("enter the number of rows and columns of a 2D array\n");
    scanf("%d%d",&r,&c);
    int *arr[r];
    for(i=0;i<r;i++)
    {
        arr[i]=(int*)malloc(c*sizeof(int));
    }
    printf("enter the elements of a matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the 2D ARRAY is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("|%d| ",arr[i][j]);
        }
        printf("\n");
    }
    free(arr[r]);
}
