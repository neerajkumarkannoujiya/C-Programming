#include<stdio.h>
#include<stdlib.h>

struct node * f =NULL;
struct node *r=NULL;
struct node{
	
	int data;
	struct node *next;
	
};
void linkedListTraversal(struct node * ptr){
	printf("Printing the element of linked list \n");
	while (ptr!=NULL){
		printf("Element : %d\n",ptr->data);
		ptr=ptr->next;
	}
}

int isEmpty(struct node *ptr){
	if(ptr==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct node *ptr){
	if(ptr==NULL){
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void enqueue(int val){
	struct node *n=(struct node *)malloc(sizeof(struct node));
	if(isFull(n))
	{
		printf("The Queqe is full\n");
	}
	else
	{
		n->data=val;
		n->next=NULL;
		if(f==NULL)
		{
			f=r=n;
		}
		else
		{
			r->next=n;
			r=n;
		}
	}
}

int dequeue(){
	int val= -1;
	struct node * ptr=f;
	if(isEmpty(f)){
		printf("The queue is empty\n");
	}
	else{
		f=f->next;
		val=ptr->data;
		free(ptr);
		
	}
	return val;
}
int main()
{
	
	linkedListTraversal(f);
	printf("Decueuing element %d\n",dequeue());
	enqueue(44);
	enqueue(48);
	enqueue(34);
	enqueue(64);
	enqueue(41);
	enqueue(47);
	printf("Decueuing element %d\n",dequeue());
	printf("Decueuing element %d\n",dequeue());
	printf("Decueuing element %d\n",dequeue());
	printf("Decueuing element %d\n",dequeue());
	printf("Decueuing element %d\n",dequeue());
	printf("Decueuing element %d\n",dequeue());
	linkedListTraversal(f);
	
	
	
	
	
	return 0;
}
