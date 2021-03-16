#include<stdio.h>

int top=-1;
void push(int a,int stack[],int *top)
{
    if(*top==-1)
    {
        //printf("%d ",a);
        *top=0;
        stack[*top]=a;
        //printf("%d ",stack[*top]);
    }
    else
    {
        printf("%d ",a);
        *top=*top+1;
        stack[*top]=a;
        //printf("%d ",stack[*top]);

    }
}
void display(int stack[],int *top)
{
    int i;
    if(*top==-1)
    {
        printf("stack is empty");
    }
    else
    {

        for(i=*top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
}
void main()
{
    int stack[50];
    int n,i,j,b;
    int a[50];
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        int count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                b=a[j];
                count++;
                push(b,stack,&top);
                break;
            }
        }
        if(count==0)
        {
            push(-1,stack,&top);
        }
    }
    printf("greater numbers");
    display(stack,&top);
}
