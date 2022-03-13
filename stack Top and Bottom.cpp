#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
};
int isEmpty(struct stack*ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct stack*ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(struct stack *ptr,int value){
	if(isFull(ptr)){
		printf("Stack overflow! the value %d cannot pushed\n",value);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=value;
		
	}
}
int stackTop(struct stack*ptr){
	return ptr->arr[ptr->top];
}
int stackBottom(struct stack*ptr){
	return ptr->arr[0];
}

int main(){
	struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
	sp->size=10;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size * sizeof(int));
	printf("Before Pushing %d\n",isEmpty(sp));
	printf("Before Pushing %d\n",isFull(sp));
	
	push(sp,55);
	push(sp,57);
	push(sp,58);
	push(sp,25);
	push(sp,15);
	push(sp,45);
	push(sp,50);
	push(sp,35);
	push(sp,27);
	push(sp,11);
	printf("After Pushing %d\n",isEmpty(sp));
	printf("After Pushing %d\n",isFull(sp));
	
	printf("Stack Top : %d\n",stackTop(sp));
	printf("Stack Bottom : %d\n",stackBottom(sp));


	return 0;
}
