#include<stdio.h>
 #define max 50
int queue[50];
int front=-1;
int rear=-1;
void enqueue()
{
    int data;
    printf("enter the element to be inserted");
    scanf("%d",&data);
    if(rear==max-1)
    {
        printf("overflow");
    }
    else
    {
        if(front==-1&&rear==-1)
        {
          front=rear=0;
          queue[rear]=data;
        }
        else
        {
            rear=rear+1;
            queue[rear]=data;
        }

    }
}
void dequeue()
{
    if(front==-1&& rear==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("deleted element:%d\n",queue[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1&& rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void main()
{

    int choice;
    while(1)
    {
        printf("\n1.enqueue 2.dequeue 3.display 4.quit\n");
        printf("\nenter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            break;
        }
    }
}
