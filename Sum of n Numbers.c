#include<stdio.h>

int main()
{
int a=1,sum=0,n;
printf("The sum of value till :");
scanf("%d",&n);
while(a<=n){
sum = sum+a;
a++;
}
printf("The sum of %d is %d",n,sum);
return 0;
}