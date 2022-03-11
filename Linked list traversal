#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void linkedListTraversal(struct node *ptr ){
	while(ptr != NULL){
		printf("Element : %d\n",ptr ->data);
		ptr = ptr->next;
	}
}
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	head ->data = 6;
	head ->next=second;
	second ->data = 12;
	second ->next=third;
	third ->data=22;
	third ->next = fourth;
	fourth ->data=99;
	fourth ->next=NULL;
	linkedListTraversal(head);
	
	return 0;
}
