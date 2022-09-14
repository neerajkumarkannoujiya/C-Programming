#include<stdio.h>
int main ()
{
int arr[]={24,65,33,55,23,53},i,min,tem,max;
for(i=0;i<6;i++)
{
min=arr[0];
if (min>arr[i+1])
{
tem=arr[0];
arr[0]=arr[i+1];
arr[i+1]=tem;
}
}
printf("minimum is %d\n",min);
for (i=0;i<6;i++)
{
max=arr[6];
if (max<arr[i])
{
tem=arr[0];
arr[0]=arr[i];
arr[i]=tem;
}

}
printf("maximum is %d",max);

}