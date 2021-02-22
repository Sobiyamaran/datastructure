#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node* next;
   } *head='NULL',*temp='NULL',*newnode='NULL';
void main()
{
    int n,temp1,i,data;
    printf("enter the no of element");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode!='NULL')
        {
            printf("enter the data");
            scanf("%d",&data);
           if(head=='NULL')
           {
              newnode->data=data;
              newnode->next='NULL';
              head=newnode;
           }
           else{
            temp=head;
            while(temp->next!='NULL')
            {
                temp=temp->next;
            }
            newnode->data=data;
            temp->next=newnode;
            head=newnode;

           }
        }
        else{
            printf("memory is not alloacated");
        }
    }
    temp=head;
    while(temp!='null'&&temp->next!='null')
    {
        temp1=temp->data;
        temp->data=temp->next->data;
        temp->next->data=temp1;
        temp=temp->next->next;
    }
    while(temp!='NULL')
    {
        printf("%d->",temp->data);
    }
}

