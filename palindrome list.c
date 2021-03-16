#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

}*head='NULL',*temp,*last;
void main()
{
    int  max,n,i;
    struct node *newnode;
    int data;
    struct node *temp;
   // struct node *previous;
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
    int count=0,flag=0;
    while(temp!='NULL')
    {
        count++;
        last=temp;
        temp=temp->next;
    }
    for(i=0;i<count/2;i++)
    {
        temp=head;
        temp1=head;
        while(temp1->next!=last&&last!=head)
        {
             temp1=temp1->next;
        }
        if(temp->data==last->data)
        {
            flag++;
        }
        last=temp1;
        temp=temp->next;


    }
    if(flag==0)
      printf("not a palindrome");
    else
      printf(" palindrome");
}
