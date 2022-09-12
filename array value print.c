#include<stdio.h>
int main()
{
int arr[]={1,23,12,13,65,75,85,8,5,4};
int *ptr=&arr;
printf("%d",*(ptr+2));
}
