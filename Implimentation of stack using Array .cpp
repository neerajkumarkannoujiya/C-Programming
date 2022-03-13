#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};
int isEmpty(struct stack* ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct stack* ptr){
	if(ptr->top==ptr->size-1){
		return 1;                                                      
	}
	else{
		return 0;
	}
}

void push(struct stack* ptr,int val){
	if(isFull(ptr)){
		printf("Stack Overflow! cannot push %d to the stack\n",val);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}

int pop(struct stack* ptr){
	if(isEmpty(ptr)){
		printf("Stack Underflow! cannot pop from the stack\n");
		return -1;
	}
	else{
		int val =ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int peek(struct stack *ptr,int i){
	int arrayInd = ptr->top-i +1;
	if(arrayInd<0){
		printf("Not a valid operation for the stack\n");
		return -1;
	}
	else{
		return ptr->arr[arrayInd];
	}
}
int main(){

	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
	s->size=50;
	s->top=-1;
	s->arr=(int *)malloc(s->size * sizeof(int));
	printf("Before pushing Full: %d\n",isFull(s));
	printf("Before pushing Empty: %d\n",isEmpty(s));
	push(s,23);
	push(s,53);
	push(s,20);
	push(s,63);
	push(s,43);
	push(s,26);
	push(s,22);
	push(s,26);
	push(s,26);
	push(s,26);
	push(s,55);
	push(s,88);
	printf("\n\nAfter pushing Full: %d\n",isFull(s));
	printf("After pushing Empty: %d\n",isEmpty(s));
	
	printf("popped %d from the stack\n",pop(s));
	for(int j =1;j<=s->top+1;j++){
	
	printf("The value at Position %d is %d\n",j,peek(s,j));
}
	return 0;
}
