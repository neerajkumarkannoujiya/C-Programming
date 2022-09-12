#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a[100],temp,n;
    printf("The no. of elements in array : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("The elements of array is :");
        scanf("%d",&a[i]);
    }

    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("The sorted array is:");
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}