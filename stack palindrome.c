#include<stdio.h>
#include<stdlib.h>
char stack[50];
int top=-1;
void push( char ele)
{
    top++;
    stack[top]=ele;
}
char pop()
{
   return stack[top--];
}
void palindrome(char str[])
{
    int len=0,i=0,count=0;
    char ele;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
  //  printf("%d",len);
    for(i=0;i<len/2;i++)
    {
        push(str[i]);
        count++;
      //  printf("%c",str[i]);
      //  printf("%c",str[i]);
    }
    if(len%2!=0)
    {
        i++;
        count++;
    }

    while(str[i]!='\0')
    {
        ele=pop();
        //printf("%c",ele);
        if(ele!=str[i])
        {
            printf("not a palindrome");
            break;
        }
        i++;
        count++;
    }
    if(count==len)
    {
        printf("palindrome");
    }

}
void main()
{
    char str[20];
    printf("enter the string");
    scanf("%s",&str);
    palindrome(str);
}
