#include<stdio.h>
#include<stdlib.h>
struct queqe{
	int fr;
	int re;
	int size;
	int *arr;
};

int isEmpty(struct queqe *q){
	if(q->fr==q->re){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct queqe *q){
	if(q->re==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void enque(struct queqe *q,int val){
	if(isFull(q)){
		printf("The Queqe is Full\n");
	}
	else{
		q->re=q->re+1;
		q->arr[q->re]=val;
	}
}
int deque(struct queqe *q){
	int i=-1;
	if(isEmpty(q)){
		printf("The queqe is Empty\n");
		return 0;
	}
	else{
		q->fr++;
		i=q->arr[q->fr];
		
	}
	return i;
}

int main(){
	struct queqe *q=(struct queqe*)malloc(sizeof(struct queqe));
	q->size=10;
	q->fr=q->re=-1;
	q->arr=(int *)malloc(q->size*sizeof(int));
	enque(q,12);
	enque(q,16);
	printf("The value dequeqe is %d\n",deque(q));
	printf("The value dequeqe is %d\n",deque(q));
	if(isEmpty(q)){
		printf("The queqe is empty\n");
	}
	else{
		printf("The queqe is not empty");
	}
	
	return 0;
}
