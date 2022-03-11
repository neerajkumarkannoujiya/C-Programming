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
struct node* deleteAtIndex(struct node* head,int index){
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
	first ->data = 11;
	first ->next =second;
	second ->data = 5;
	second ->next = third;
	third ->data = 44;
	third ->next = head;
	
	linkedListTraversal(head);
    int index;
    printf("Enter the index : \n");
    scanf("%d",&index);
    head=deleteAtIndex(head,index);
    linkedListTraversal(head);
	return 0;
}
