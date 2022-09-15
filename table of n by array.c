#include<stdio.h>
int main()
{
int arr[10],i,num;
int n;
printf("The table of is:\n",n);
scanf("%d",&n);
for(i=1;i<=10;i++)
{
num=n*(i);
arr[i] =num;
}
printf("print the table in array:\n");
for(i=1;i<=10;i++)
{
printf("%d\n",arr[i]);
}
}
