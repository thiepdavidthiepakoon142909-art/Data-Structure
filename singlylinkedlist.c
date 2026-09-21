//SINGLY LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next
};

void insert_beg()
{
    struct node *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d",&num);
    new_node =(struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start =  new_node;

}
void insert_end()
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data :");
    sacnf("%d", &num);
    new_node -> data = num;
    new_node -> next = NULL;
    ptr = start;
    while(ptr -> next !+ NULL)
        ptr = ptr -> next;
    ptr -> next = new_node;

}

void insert_before()
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\n Enter the data :");
    sacnf("%d", &num);
    printf("\n Enter the value before which you want to insert: ");
    scanf("%d", &val);

     printf("\n Enter the  data to insert: ");
     scanf("%d", &num);

     new_node = (struct node *)malloc(sizeof(struct node));

     new_node -> data = num;
     if (start == NULL)
     {
         printf("\n List is empty.");
         free(new_node);
         return;

     }
     ptr = start->next;
     preptr=start;

     while (ptr != NULL && ptr-> data != val)
     {
         preptr = ptr;
         ptr = ptr->next;

     }
     if (ptr == NULL)
     {
         printf("\n Value %d not found in the list. ", val);
         free(new_node);
         return;

     }
     new_node->next = ptr;
     preptr ->next = new_node;
}

void insert_after()
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\n Enter the data : ");
    scanf("%d",&num);
    new_node =(struct node *)malloc(sizeof(struct node));
}
void delete_beg()
{
    struct node *ptr;
    ptr = start;
    start = start -> next;
    free(ptr);

}

void delete_beg()
{
    struct node *ptr;
    ptr = start;
    start = start-> next;
    free(ptr);

}

void delete_end()
{
     struct node *ptr, *preptr;
     ptr = start;
     while(ptr -> next != NULL)
     {
         preptr = ptr;
         ptr = ptr -> next;

     }
      preptr -> next = NULL;
      free(ptr);

}
 void delete_node()
 {
     struct node *ptr, *prept;
     int val;
     printf("\n Enter the value of the node which has to be delete :");
     scanf("%d",&val);
     ptr = start;
     if(ptr == val)
     {
         delete_beg ();
     }
     else
     {
         while(ptr -> data != val)
         {
             preptr= ptr;
             ptr = ptr -> next;
         }
         preptr -> next = ptr -> next;
         free(ptr);

        }

 }







