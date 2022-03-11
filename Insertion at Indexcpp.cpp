#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void linkedInsertion(struct node *ptr){
	while(ptr!=NULL){
	printf("Element : %d\n",ptr ->data);
	ptr =ptr-> next;
}
}
struct node* insertAtIndex(struct node *head,int data,int index){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *p = head;
	int i=0;
	while(i!=index-1){
		p = p->next;
		i++;
	}
	ptr ->data=data;
	ptr ->next=p->next;
	p ->next = ptr;
	return head;
}

int main(){
	struct node * head;
	struct node *second;
	struct node *third;
	struct node *first;
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	head ->data = 4;
	head ->next = first;
	second ->data = 5;
	second ->next = third;
	third ->data = 44;
	third ->next = NULL;
	first ->data = 11;
	first ->next =second;
	linkedInsertion(head);
	head=insertAtIndex(head,88,2);
	printf("After Insertion at index 2 \n");
	linkedInsertion(head);
	
	return 0;
}
