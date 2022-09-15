#include<stdio.h>
#include<string.h> 

struct employee{
int code;
float salary;
char name[20];
};

int main (){
int a=2;
float b=2535.65;
char d='N';

struct employee e1;
e1.code=28;
e1.salary =1726.52;

strcpy(e1.name,"Neeraj");
printf("%d\n",e1.code);
printf("%.2f\n",e1.salary);
printf("%s\n",e1.name);
return 0;



}