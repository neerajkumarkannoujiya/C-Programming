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
struct node* insertAtEnd(struct node *head,int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr ->data=data;
	struct node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
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
	head=insertAtEnd(head,100);
	printf("After Insertion at end\n");
	linkedInsertion(head);
	
	return 0;
}
