#include<stdio.h>
int main()
{
int i,n,num,sum=0;
printf("The table of:");
scanf("%d",&n);
for(i=1;i<=10;i++)
 {
num =n*i;
sum+=num;
printf("%d\n",num);
}
printf("= %d",sum);
return 0;
}