#include<stdio.h>
#define Max 3
int queue[Max];
int front=-1;
int rear=-1;
void insert();
int Delete();
void display();

int main()
{

    int option,val;
    do
    {
        printf("\n\n************************* MAIN MENU **************************");
        printf("\n\n 1.Insert an element");
        printf("\n\n 2.Delete an element");
        printf("\n\n 3.Display the queue");
        printf("\n\n 4.Exit");
        printf("\n\n Enter your option :");
        scanf("%d",&option);



       switch(option)
        {

        case 1:
            insert();
            break;

        case 2:

         val= Delete();
            if(val!=-1)
            {
            printf("\n The number deleted is : %d", val);
            }
            break;


        case 3:
            display();
            break;

        }
    } while(option !=4);
    return 0;
}

void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue: ");
    scanf("%d",&num);
    if((front==0 && rear==Max-1)||(front>0 && rear==front-1))
    {
        printf("\n Overflow ");

    }
    else if(front==-1 && rear==-1)
    {

        front=rear=0;
        queue[rear]=num;
    }

    else
    {

     rear++;
    queue[rear]=num;

    }


}

int Delete()
{

    int val;
    if(front==-1 && rear==-1)
    {

        printf("\n\n Underflow");
        return -1;
    }
    val= queue[front];

    if(front==rear)
    {
        front=rear=-1;

    }
    else
    {

        if(front==Max-1)
        {
            front=0;
        }


        else{

        front++;

        }
        return val;
    }

}

void display()
{

    int i;
    printf("\n");

    if(front==-1 && rear==-1)
    {
        printf("\n Queue is empty");
    }
    else
    {
        if(front<-rear)
        {
            for(i=front;i<=rear;i++)
            {
                printf("\t %d",queue[i]);

            }

        }
        else
            {
                for(i=front;i<Max;i++)
                {

                    printf("\t %d",queue[i]);

                }

                for(i=0;i<rear;i++)
                {

                    printf("\t %d",queue[i]);

                }

            }

    }
}
