#include<Stdio.h>
void main()
{
int m,n,a,b,rem,gcd,lcm;
printf("enter two numbers\n");
scanf("%d%d",&m,&n);
a=m;
b=n;
while(b!=0)
{
 rem=a%b;
a=b;
b=rem;
}
gcd=a;
lcm=(m*n)/gcd;
printf("the gcd and lcm of two numbers is %d and %d\n",gcd,lcm);
}
