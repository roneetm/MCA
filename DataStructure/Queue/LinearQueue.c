#include<stdio.h>
#include<stdlib.h>
#define MAX 10
	int queue[MAX];
	int front =-1;
	int rear =-1;
	void enque();
	void deque();
	void traverse();
	int main()
{
	int oper;
	while(1)
{
	printf("\n1. Enter an element\n");
	printf("\n2. Delete an element\n");
	printf("\n3. Traverse\n");
	printf("\n4. Exit\n");
	printf("\nEnter your option\t");
	scanf("%d", &oper);
	switch(oper)
{
	case 1: enque();
			break;
	case 2: deque();
			break;
	case 3: traverse();
			break;
	case 4: exit(0);
	default: printf("\n Sorry! Wrong Option\n");
			break;
}
}
}
	void enque()
{	int item;
	if (rear<MAX-1)
{
	if(front==-1)
	front=0;
	printf("Enter the elements\t");
	scanf("%d", &item);
	rear=rear+1;
	queue[rear]=item;
}
	else	
{
	printf("\n Queue is full\n");
	printf("\n Queue Overflow\n");
}
}
	void deque()
{
	int item;
	if(front>rear || front==-1)
{	printf("Queue is empty\n");
	
}
	else	
{
	item=queue[front];
	printf("\n Deleted element is %d\n", item);
	front=front+1;
}
}
	void traverse()
{
	int i;
	if(rear==-1 || front>rear)
	printf("\nQueue is empty\n");
	else
{
	printf("\nElements in Queue\t");
	for(i=front; i<=rear; i++)
	printf("%d\t", queue[i]);
}
}
