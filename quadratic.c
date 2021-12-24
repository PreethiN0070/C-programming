#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,disc,root1,root2,real,img;
printf("enter the coefficients of quadratic equation\n");
scanf("%f%f%f",&a,&b,&c);
disc=(b*b)-(4*a*c);
if(disc==0)
{
printf("roots are real and equal\n");
root1=root2=-b/(2*a);
printf("the roots are root1=%f,root2=%f\n",root1,root2);
}
else if(disc>0)
{
printf(" roots are real and distinct\n");
root1=((-b)+sqrt(disc)/(2*a));
root2=((-b)-sqrt(disc)/(2*a));
printf("the roots are root1=%f,root2=%f\n",root1,root2);
}
else
{
printf("roots are real and imaginary\n");
real=-b/(2*a);
img=fabs((sqrt(disc))/(2*a));
printf("root1=%f+i%f\n",real,img);
printf("root2=%f-i%f\n",real,img);
}
}
