#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void printArray(int *A,int n){
	printf("Your Array is  : ");
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
int maximum(int *a,int n){
	int max=INT_MIN;
	for(int i =0;i<n;i++)
	{
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
void countSort(int *a,int n){
	int i,j;
	int max=maximum(a,n);
	int * count=(int *)malloc((max+1)*sizeof(int));
	for(int i =0;i<max+1;i++){
		count[i]=0;
	}
	for(int i=0;i<n;i++){
		count[a[i]]=count[a[i]] +1;
	}
	i=0;
	j=0;
	while(i<=max){
		if(count[i]>0){
			a[j] = i;
			count[i]=count[i]-1;
			j++;
		}
		else{
			i++;
		}
		
	}
	
}
int main(){
	int A[100],n;
	printf("Enter the number of elements :\n");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("Enter the elements :\n");
		scanf("%d",&A[i]);
	}
	
	printArray(A,n);
	countSort(A,n);
	printf("After Sorting\n");
	printArray(A,n);
	
	
	return 0;
}
