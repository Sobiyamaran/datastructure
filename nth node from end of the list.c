#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head='NULL',*newnode,*temp,*last='NULL';
void nthnode(struct node *head,int n)
{
    struct node *p;
    struct node *q;
    p=q=head;
    int i;
    for(i=0;i<n&&q!='NULL';i++)
    {
        q=q->next;
    }
    if(i<n)
        printf("n is greater than values in list");
    while(q!='NULL')
    {
        p=p->next;
        q=q->next;
    }
    printf("%d",p->data);
}
void main()
{
    int n,a,m,i;
    printf("enter the no of elements");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("enter the element");
        scanf("%d",&a);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=a;
        newnode->next='NULL';
        if(head=='NULL')
        {
            head=last=newnode;
        }
        else
        {
            last->next=newnode;
            last=newnode;
        }
    }
    printf("enter the n value");
    scanf("%d",&n);
    nthnode(head,n);
}
