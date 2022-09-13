#include<stdio.h>

typedef char bit;
bit carry = 0;
bit halfadd( bit A, bit B ) {
    carry = A & B;
    return A ^ B;
}
int main()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int result = halfadd(i, j);
            printf("%d + %d = %d:%d\n", i, j, result, carry);
        }
    }
    return 0;
}