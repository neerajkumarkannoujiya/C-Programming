#include<stdio.h>
int linearSearch(int arr[],int size,int element){
for (int i = 0 ; i < size ; i++)
{
if(arr[i] == element){
return i;
}
}
return -1;
}
int main (){
int arr[]={25,46,26,47,48,43,95,32,63};
int size =sizeof(arr)/sizeof(int);
int element =7;
int searchIndex=linearSearch(arr,size,element);
printf("The element %d is found at index %d\n ",element,searchIndex);
return 0;
}