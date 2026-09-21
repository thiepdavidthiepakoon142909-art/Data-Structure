#include<stdio.h>

void main()
{

int arr[20];
int n;
int i;
int search;
int f=0;
printf("\n Enter Limit:");
scanf("%d", &n);

for(i=0;i<n;i++)
{

    printf("\n Enter Number %d: ", i+1);
    scanf("%d",&arr[i]);
}


for(i=0;i<n;i++)
{

    printf("\n \n %d ",arr[i]);
}


printf("\n Enter value to be searched :");
scanf("%d", &search);

for(i=0;i<n;i++)
{

 if(arr[i]==search)
 {
        f=1;
        printf("\n %d is found in position %d",search,i+1);
        break;
 }

}


 if(f==0)
 {

     printf("\n The value not found");

 }

}
