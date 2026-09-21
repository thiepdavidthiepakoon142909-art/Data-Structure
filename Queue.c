#include<stdio.h>

#define Max 5

int front=-1;
int rear=-1;
int queue[Max];
void enqueue();
int dequeue();
void display();

void main()
{

    int x;

     do
    {
        printf("\n\n 1. Enqueue");
         printf("\n\n 2. Dequeue");
          printf("\n\n 3. display");
         printf("\n\n 4. Exit");

        printf("\n\n Enter Your Choice: ");
        scanf("%d",&x);


        switch(x)
        {

        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\n \n Exit....");
            break;

        default:
            printf("\n\n Invalid choice...");
            break;

        }
        }
while(rear!=4);


}

    void enqueue()
    {
        int x;
        printf("\n Enter Element");
        scanf("\n %d",&x);

        if(front=Max-5)
        {

        printf("Queue is Overflow");

        }

        else if(front==-1 && rear==-1)
            {
                front=rear=0;

            }

        else
        {
            rear=rear+1;

        }

        queue[rear]=x;

}

int dequeue()
{
        int x;
    if(front==-1 || front>rear)
    {
        printf("\n Underflow");

    }

    else
    {
        x=queue[front];
        printf("\n Deleted value is: %d",x);
        if(front==rear)
        {
            front=rear=-1;
            return x;

        }
        front++;


    }


}


void display()
{
    int i;
    for(front=i;front<=rear;i++)
    {

        printf("\n %d",queue[i]);

    }


}




