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
	printf("\nEnter your option\n");
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
{
	int item;
	if(front==(rear+1)%MAX)
	printf("\nQueue Overflow\n");
	else
{
	if(front==-1)
	front=0;
	printf("\nEnter the element\n");
	scanf("%d", &item);
	rear=(rear+1)%MAX;
	queue[rear]=item;
}
}
	void deque()
{
	int item;
	if(front==-1)
	printf("\nQueue is empty\n");
	else
	{
	item = queue[front];
	printf("\nDeleted element is %d\n", item);
	front=(front+1)%MAX;
	}
}
	void traverse()
{
	int i;
     if(front==-1 || front==rear)
          printf("\nQueue is empty\n");
     else
    {
	printf("\nElements in Queue\n");
	if(front<rear)
        { 
        for(i=front; i<=rear; i++)
	printf("%d\t", queue[i]);
        }
	if (front>=rear)
	{
	for(i=0; i<=rear; i++)
	printf("%d\t", queue[i]);
	for(i=front; i<MAX; i++)
	printf("%d\t", queue[i]);
	}
      }     
}
