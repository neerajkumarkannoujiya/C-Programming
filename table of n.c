#include<stdio.h>
int main()
{
int i,n,num;
printf("The table of:");
scanf("%d",&n);
for(i=1;i<=10;i++) {
num =n*i;
printf("%d × %d = %d\n",n,i,num);}
return 0;
}