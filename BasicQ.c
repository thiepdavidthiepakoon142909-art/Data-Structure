#include<stdio.h>
int Queue[5];

void insert(int x);
void delete();
int front=-1;
int rear=-1;
void display();

void main()
{

    void insert(int x)
    {
        if(front==rear-1)
        {
            printf("\n overflow");

        }

        else if(front==-1&& rear==-1)
        {

            front=rear=0;
            Queue[rear]=x;

        }

        else
        {

            rear++;

        }


        void delete()
        {

            if(front==-1 && rear==-1)
            {


                printf("\n Underflow Or Empty");

            }

            else if(front==rear)
            {

                front=rear=-1;


            }

            else
            {
               printf("\n %d",Queue[front]);
                front++;

            }



        }

        void display()
        {
            if(front==-1 && rear==-1)
            {

                printf("\n Queues is Empty");
            }

            else
                {
                    for(i=front;front<=rear;i++)
                    {

                        printf("%d",Queue[i]);

                    }

                }


        }






    }


}
