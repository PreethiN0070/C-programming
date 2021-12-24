#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,r,c;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&r,&c);
    int*arr[r];
    int b[i][j];
    for(i=0;i<r;i++)
    {
        *arr = (int*)malloc(c*sizeof(int));

    }
    printf("enter the elements of a matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the  original matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        b[j][i]=arr[i][j];
      }
    }
    printf("the transpose of a matrix is:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d\t",b[j][i]);
      }
      printf("\n");
    }

}
