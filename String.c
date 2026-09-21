#include<stdio.h>
#include<string.h>

char Stack[20];
int top=-1;

char pop();
void push(char);

void main()
{

    char str[20],ch;
    int i,l;
    printf("\n Enter a String:");
    scanf("\n %s",&str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {

        push(str[i]);



    }

    printf("\n Reversed String ");
    for(i=0;i<l;i++)
    {

        ch=pop();
        printf("\n %c",ch);

    }


}

void push(char c)
{
    top++;
    Stack[top]=c;


}

char pop()
{

    char c;
    c=Stack[top];
    top--;
    return c;

}
