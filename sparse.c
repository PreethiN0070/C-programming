#include<stdio.h>
#include<Stdlib.h>
void main()
{
    int r,c,arr[5][5],i,j,count=0;
    printf("enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of a matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>(r*c)/2)
    {
        printf("sparse matrix\n");
    }
    else
    {
        printf("not a sparse ");
    }
}
