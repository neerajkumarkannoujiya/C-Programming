#include<stdio.h>
int main(){
int i=0,n,fac=1;
printf("The factorial of ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fac = fac*i;
}
printf("the value of fac %d",fac);
return 0;
}