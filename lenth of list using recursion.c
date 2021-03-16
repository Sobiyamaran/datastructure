#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

}*head='NULL',*temp,*last;
int count=0;
int length(struct node *temp)
{

    if(temp!='NULL')
    {
        count=count+1;
        length(temp->next);
    }
   return count;
}

void main()
{
    int  max,n,i,len;
    struct node *newnode;
    int data;
    struct node *temp;
    struct node *temp1;
    printf("enter the no of elements in list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode!= 'NULL' )
    {
       printf("enter the data");
       scanf("%d",&data);
        if(head=='NULL')
        {
          newnode->data=data;
          newnode->next='NULL';
          head=newnode;
          //display();
        }
        else
        {
            newnode->data=data;
            newnode->next=head;
            head=newnode;
          //  display();

        }
    }
    else
    {
        printf("memory is not allocated");
    }
    }
    temp=head;
    len=length(temp);
    printf(" length :%d",count);
}

