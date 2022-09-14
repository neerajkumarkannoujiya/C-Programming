#include<stdio.h>
int main(){
int i,n,num,sum=0;
printf("table of:");
scanf("%d",&n);
for (i=10;i;i--){
num = n * i;
sum +=num;
printf("%d × %d = %d\n",n,i,num);}
printf("%d",sum);
return 0;
}