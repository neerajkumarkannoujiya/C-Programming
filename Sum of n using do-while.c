#include<stdio.h>

int main()
{
int a=1,sum=0,n;
printf("The sum of value till :");
scanf("%d",&n);
do{
sum=sum+a;
a++;

}while(a<=n);
printf("sum=%d",sum);

return 0;
}