#include<stdio.h>

int main()
{
int a=1,sum=0,n;
printf("The sum of value till :");
scanf("%d",&n);
for ( a=1; a<=n;a++)
sum+=a;
printf("sum = %d",sum);
return 0;
}