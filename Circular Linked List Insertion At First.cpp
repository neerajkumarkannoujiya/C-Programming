#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void linkedListTraversal(struct node *head){
	struct node *ptr=head;
	do{
	printf("Element : %d\n",ptr ->data);
	ptr =ptr-> next;
    }while(ptr!=head);
}
struct node* insertAtStart(struct node* head,int element){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=element;
	struct node* p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	
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
	first ->data = 11;
	first ->next =second;
	second ->data = 5;
	second ->next = third;
	third ->data = 44;
	third ->next = head;
	
	linkedListTraversal(head);
	int element;
	printf("Enter the element :\n");
	scanf("%d",&element);
	printf("After Insertion at start : \n");
	
	head=insertAtStart(head,element);
    linkedListTraversal(head);
	return 0;
}
