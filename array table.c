#include<stdio.h>
int main()
{
int arr[10],i,table=5,num;
for(i=0;i<10;i++)
{
num=table*(i+1);
arr[i] =num;
}
printf("print the table in array:\n");
for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);
}
}
