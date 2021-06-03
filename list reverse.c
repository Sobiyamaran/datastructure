#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node *next;
}*head='NULL',*last='NULL',*newnode,*temp;

void reverse()
{
    struct node *temp1;
    struct node *temp2;
    temp=head;
    int count=0,i;
    while(temp!='NULL')
    {
        count++;
        temp=temp->next;
    }
    temp2=last;
    for(i=0;i<count;i++)
    {
        temp1=head;
        while(temp1->next!=temp2&&temp2!=head)
        {
            temp1=temp1->next;
        }
        printf("%d ",temp2->data);
        temp2=temp1;

    }

}
void  insert()
{
    int a;
    printf("enter the element");
    scanf("%d",&a);
    newnode=(struct node*)malloc(sizeof(struct node));
   if (newnode!='NULL')
    {
        newnode->data=a;
        newnode->next='NULL';
    }
    else
        printf("space is not allocated");
    if(head=='NULL')
    {
        head=last=newnode;
        printf("inserted\n");
    }
    else
    {
        last->next=newnode;
        last=newnode;
        printf("inserted\n");
    }
}
void main()
{
    int choice;

    while(1)
    {
        printf("1.insert\n 2.reverse\n 3.quit\n");
        printf("\nenter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                   break;
            case 2:reverse();
                   break;
            case 3:exit(1);
                   break;
        }
    }
}
