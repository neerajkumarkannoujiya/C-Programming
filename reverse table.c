#include<stdio.h>

int main()
{
int a,n,num;
printf("The reverse table of :");
scanf("%d",&n);
for (a=10;a;a--)
{
num = n*a;
printf("%d × %d = %d\n",n,a,num);
}
return 0;
}