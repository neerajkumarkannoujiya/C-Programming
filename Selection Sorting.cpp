#include<stdio.h>
void printArray(int *A,int n){
	printf("Your Array is  : ");
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void selectionSort(int *A,int n){
	int indexOfMin,temp;
	for(int i=0;i<n-1;i++){
		indexOfMin=i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[indexOfMin]){
				indexOfMin=j;
			}
		}
		temp=A[i];
		A[i]=A[indexOfMin];
		A[indexOfMin]=temp;
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
	selectionSort(A,n);
	printf("After Sorting\n");
	printArray(A,n);
	
	
	return 0;
}
