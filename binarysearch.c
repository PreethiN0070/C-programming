#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[30],i,n,low,mid,high,key;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key element\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high){
mid=(low+high)/2;
if(key==a[mid]){
printf("SEARCH SUCCESSFUL\n");
exit(0);
}
 else if (key<a[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}
}
printf("SEARCH UNSUCCESSFUL");

}
