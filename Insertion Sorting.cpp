#include<stdio.h>
void printArray(int *A,int n){
	printf("Your Array is  : ");
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void insertionSort(int *A,int n){
	int key,j;
	for(int i=0;i<=n-1;i++){
		key=A[i];
		j=i-1;
		
		while(j>=0 && A[j]>key){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
		
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
	insertionSort(A,n);
	printf("After Sorting\n");
	printArray(A,n);
	
	return 0;
}
