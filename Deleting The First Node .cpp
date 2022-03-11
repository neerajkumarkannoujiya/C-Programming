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
struct node* deleteAtFirst(struct node *head)
{
	struct node*ptr=head;
	head=head->next;
	free(ptr);
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
	head =deleteAtFirst(head);
	printf("Deletion at First \n");
    linkedInsertion(head);
	
	return 0;
}
