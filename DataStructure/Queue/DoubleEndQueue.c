#include<stdio.h>
	#include<stdlib.h>
	#define MAX 10
	int queue[MAX];
	int front=-1;
	int rear=-1;
	void insert_rear();
	void delete_front();
	void insert_front();
	void delete_rear();
	void traverse();

	void main()
{
	int oper;
	while(1)
{       
        printf("\n1. Enter from Rear\n");
	printf("\n2. Delete from Front\n");
	printf("\n3. Insert from Front\n");
	printf("\n4. Delete from Rear\n");
	printf("\n5. Traverse\n");
	printf("\n6. Exit\n");
	printf("\n Enter your option: ");
	scanf("%d", &oper);

	switch(oper)
{
	case 1: insert_rear();
			break;
	case 2: delete_front();
			break;
	case 3: insert_front;
			break;
	case 4: delete_rear();
			break;
	case 5: traverse();
			break;
	case 6: exit(0);
	default: printf("/nSorry! Wrong Option/n");
}
}
}
	void insert_rear()
{ 
        int item;	
 	if(rear==MAX-1)
	printf("\nQueue is full\n");
	else
	printf("\nEnter an element\n");
	scanf("%d", &item);
	rear=rear+1;
	queue[rear]=item;
	}
        
        void delete_front()
{
        int item;
        if(front==-1 || front>rear)
        printf("\n Queue is empty\n");
        else
        {
        item=queue[front];
        front=front+1;
        printf("\nDeleted element is %d", item);
        }
}
        void insert_front()
{
        int item;
        if(front==0)
        printf("\n Element cannot be inserted from front\n");
        else
       {
        printf("\nEnter the element\n");
        scanf("%d", &item);
        front=front+1;
        queue[front]=item;
       }
}
        void delete_rear()
{
        int item;
        if(rear==-1)
        printf("\nQueue is empty\n");
        else
        {
        item=queue[rear];
        rear=rear-1;
        printf("Deleted element is %d", item);
        }
}
        void traverse()
{
        int i;
        if (front<=rear)
        {
        printf("\n Queue elements are: \n");
        for(i=front; i<=rear; i++)
        printf("%d\t", queue[i]);
        }       
        else 
        printf("\n Queue is empty\n");
}
