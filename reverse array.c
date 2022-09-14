#include<stdio.h>
int main()
{
int i,temp;
int arr[6] = {23,24,54,76,87,27};
for(i=0;i<6/2;i++)
{
temp = arr[i];
arr[i]= arr[6-i-1];
arr[6-i-1] = temp;
}
for(i=0;i<6;i++)
printf(" %d",arr[i]);
return 0;
}