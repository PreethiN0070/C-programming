#include<stdio.h>
void radixsort(int arr[5],int n);
void main()
{

    int findmax(int arr[5],int n)
    {
        int arr[5],i;
    printf("enter the array elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[5]);
    }
        int i,m,arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>m)
            {
                m=arr[i];
            }
        }
    }

    void radixsort(int arr[5],int n)
}
void radixsort(int arr[5],int n)
{
  for(exp=1;m/exp>0;exp*=10)
  {
      int output[5];
      int count[10]={0};
      for(i=0;i<n;i++)
      {
          count[(arr[i]/exp)%10]++;
      }
      for(i=n-1;i>=0;i--)
      {
          output[count[(arr[i]/exp)%10-1]=arr[i];
          count[(arr[i]/exp)%10]--;
      }
      for(i=0;i<n;i++)
      {
          arr[i]=output[i];
          printf("%d\t",arr[i]);
      }
  }
}
