#include<stdio.h>
void main()
{
    int a[50],b[50];
    int i,j,n,temp;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
  /* for(i=0;i<n/2;i++)
   {
       temp=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=temp;
   }*/
   for(i=n-1;i>=0;i--)
   {
       b[j]=a[i];
       j++;
   }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

}
