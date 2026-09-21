#include<stdio.h>
#define MAX 5

int Stack[MAX], top=-1;
void push();
void pop();
void peek();
void update();
void display();

void main()
{


    int op;

    do
    {

        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Peek");
        printf("\n 4.Update");
        printf("\n 5.Display");
        printf("\n 6.Exit");
        printf("\n Enter Your Choice");
        scanf("%d",&op);



    switch(op)
    {

    case 1:
        Push();
        break;


    case 2:
        Pop();
        break;

    case 3:
        peek();
        break;

    case 4:
        update();
        break;

    case 5:
        dipsplay();
        break;


    }
    }
while(op!=6);

    }

void push()
{

 int value;
 printf("\n Enter value to be inserted: ");
 scanf("%d",&value);

 if(top==MAX-1)
 {


    printf("Overflow");

 }

 else
 {
     top++;
     stack[top]=value;
 }

}

void pop()
{
    int val;
    printf("\n Enter values to be Deleted: ");
    scanf("%d",val);


     if(top==-1)
 {


    printf(" Stack is Underflow");

 }

 else
 {

     val=stack[top];
     printf("\n Deleted value is :%d",val);
     top--;
 }

}






 void peek()
 {
     int tp;
     if(top==-1)
     {
         printf("Stack is Empty");

     }

     else
        {

        tp=stack[top];
        printf("Top value is :%d",tp);

        }


 }





void update()
{
  int i,x;
  printf("\n Enter index to be updated: ");
  scanf("%d",&i);

   printf("\n Enter value to be updated: ");
   scanf("%d",&x);


  if(top-i+1<=-1)
  {
      printf("\n invalid index");

  }

  else
    {


    stack[top-i+1]=x;

    }


}





void display()
{

    int i;

    if(top==-1)
    {

        printf("\n Stack is Empty");
    }

    else
    {

        for(i=top;i>=0;i--)
        {

            printf("\n %d",stack[i]);
        }

    }
}


    }
    }
    }



    }
    }
}

