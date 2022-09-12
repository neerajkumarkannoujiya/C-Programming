#include<stdio.h>
#include<math.h>
int main()
{
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num !=0) {
        num /=10;
        ++count;
    }
printf("The number of digits is: %d",count);
    return 0;
}