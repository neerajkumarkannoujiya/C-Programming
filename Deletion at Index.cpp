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
struct node* deleteAtIndex(struct node *head,int index)
{
	struct node* p=head;
	struct node* q=head->next;
	for(int i =0;i<index-1;i++){
		p=p->next;
		q=q->next;	
	}
	p->next=q->next;
	free(q);
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
	int n;
	printf("Enter the index you want to delete: ");
	scanf("%d",&n);
	head =deleteAtIndex(head,n);
	printf("After Deletion at %d \n",n);
    linkedInsertion(head);
	
	return 0;
}
