#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
}*head='NULL',*last='NULL',*newnode,*slow,*fast,*temp;
void findcycle(struct node *head)
{
    int count=0;
    slow=head;
    fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            printf("list contain the loop");
            count++;
            break;
        }
    }while(slow!=fast&&fast!='NULL'&&fast->next->next!='NULL');
    if(count==0)
       printf("no loop in the list");

}
void main()
{
    int n,data;
    printf("enter no of elements");
    scanf("%d",&n);
    int i;
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        newnode=(struct node*)malloc(sizeof(struct node));

          newnode->data=data;
          newnode->next='NULL';

        if(head=='Null')
            head=last=newnode;
        else
        {
            last->next=newnode;
            last=newnode;
        }
    }
    temp=head;
    while(temp->next!='NULL')
    {
        temp=temp->next;
    }
    temp->next=head->next;
    findcycle(head);
}
