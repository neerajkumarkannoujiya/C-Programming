// Insertion sort in C

#include<stdio.h>
int main()
{
    int i,j,n,A[100],temp;
    printf("Enter no. ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter no. ");

        scanf("%d",&A[i]);
    }
    for(i=1; i<=n-1; i++)
    {   temp =A[i];
        j = i-1;

        while(j>=0 && (A[j] > temp)){
        A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }

    printf("the sorted array is. ");

    for(i=0; i<n; i++)
        printf("%d ",A[i]);
    return 0;
}
