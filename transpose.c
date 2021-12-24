#include <stdio.h>

int main()
{
    int a[10],b[10],m,n,p,q,i,j;
    printf("enter the order of matrix A\n");
    scanf("%d%d",&m,&n);
    printf("enter the order of matrix B\n");
    scanf("%d%d",&p,&q);
    printf("enter the elements of matrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
     b[i][j]=a[j][i];
    printf("the transpose of a matrix\n ");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\n",b[i][j]);
        }
    }
    return 0;
}
