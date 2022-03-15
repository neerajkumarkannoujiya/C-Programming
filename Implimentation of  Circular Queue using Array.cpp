#include<stdio.h>
#include<stdlib.h>
struct cirQueqe{
	int fr;
	int re;
	int size;
	int *arr;
};

int isEmpty(struct cirQueqe *q){
	if(q->fr==q->re){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct cirQueqe *q){
	if((q->re + 1)%q->size==q->fr){
		return 1;
	}
	else{
		return 0;
	}
}

void cirEnque(struct cirQueqe *q,int val){
	if(isFull(q)){
		printf("The Queqe is Full\n");
	}
	else{
		q->re=(q->re +1)%q->size;
		q->arr[q->re]=val;
		printf("Enqued element : %d\n",val);
	}
}
int cirDeque(struct cirQueqe *q){
	int i=-1;
	if(isEmpty(q)){
		printf("The queqe is Empty\n");
		return 0;
	}
	else{
		q->fr=(q->fr +1)%q->size;
		i=q->arr[q->fr];
		
	}
	return i;
}

int main(){
	struct cirQueqe *q=(struct cirQueqe*)malloc(sizeof(struct cirQueqe));
	q->size=4;
	q->fr=q->re=0;
	q->arr=(int *)malloc(q->size*sizeof(int));
	cirEnque(q,12);
	cirEnque(q,16);
	cirEnque(q,16);
	printf("The value dequeqe is %d\n",cirDeque(q));
	printf("The value dequeqe is %d\n",cirDeque(q));
	printf("The value dequeqe is %d\n",cirDeque(q));
	if(isEmpty(q)){
		printf("The queqe is empty\n");
	}
	else{
		printf("The queqe is not empty");
	}
	
	return 0;
}
