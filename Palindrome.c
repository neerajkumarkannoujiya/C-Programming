#include<stdio.h>
int main()
{
int num,reverse=0,remainder,sum=0;
int original;
printf("enter the number:");
scanf("%d",&num);
original=num;
while(num>0)
{
remainder=num%10;
num=num/10;
reverse=reverse*10+remainder;


}
if(original==reverse)
printf("palindrome");
else
printf("not palindrome");
}