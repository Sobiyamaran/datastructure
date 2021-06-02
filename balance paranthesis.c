#include<stdio.h>

void main()
{
    int top=-1,d=0;
    char ch,stack[30];
    printf("enter the expression");
    while(ch=getchar()&&ch!='#')
    {
        switch(ch)
        {
            case '{':top++;
                     stack[top]=ch;
                     break;
            case '[':top++;
                    stack[top]=ch;
                    break;
            case '(':top++;
                     stack[top]=ch;
                     break;
            case ')':if(stack[top]==')')
                      top--;
                      else
                        d=d+1;
                    break;
            case '}':if(stack[top]=='}')
                      top--;
                      else
                        d=d+1;
                    break;
            case ']':if(stack[top]==']')
                      top--;
                      else
                        d=d+1;
                    break;
        }
    }
    if(top==-1&&d==0)
        printf("valid expression");
    else
        printf("invalid expression");
}
