#include<stdio.h>
#include<string.h>
void main()
{
int flag=0,i,len;
char str[10];
printf("Enter the string\n");
gets(str);

len=strlen(str);
for(i=0;i<len;i++)
{
if (str[i]!=str[len-i-1])
{
flag=1;
break;
}
}
if(flag==0)
{
printf("the string %s is palindrome",str);
}
else
{
printf("the string %s is not palindrome",str);
}
}
