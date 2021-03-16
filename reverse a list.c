#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

}*head='NULL',*temp,*last;
void main()
{
    int  max,n,i;
    int a[50];
    struct node *newnode;
    int data;
    struct node *temp;
    struct node *previous;
    //struct node *temp1;
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
    i=0;
    while(temp!='NULL')
    {
       printf("%d ",temp->data);
       a[i]=temp->data;
       temp=temp->next;
       i++;
    }
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
