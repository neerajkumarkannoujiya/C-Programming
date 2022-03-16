#include<stdio.h>
void printArray(int *A,int n){
	printf("Your Array is  : ");
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void bubbleSort(int *A,int n){
	int temp;
	int isSorted=0;
	for(int i=0;i<n-1;i++){
		printf("Working on pass number %d\n",i+1);
		isSorted=1;
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				isSorted=0;
			}
		}
		if(isSorted){
			return;
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
	bubbleSort(A,n);
	printArray(A,n);
	
	return 0;
}
