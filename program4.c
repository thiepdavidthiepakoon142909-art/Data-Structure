#include<stdio.h>

void main()
{

    int arr[20];
    int brr[20];
    int crr[20];
    int i;
    int n;
    int m=0;

    printf("Enter Limit:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

    printf("\n Enter Element %d: ",i+1);
    scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)
{

    printf("\n \n %d ",arr[i]);
}


    printf("\n Enter Limit:\n");
    scanf("%d",&n);


    printf("Enter Array Limit 2: \n ");



     for(i=0;i<n;i++)
    {

    printf("\n Enter Element %d: ",i+1);
    scanf("%d",&brr[i]);

    }

    for(i=0;i<n;i++)
    {

    printf("\n \n %d ",brr[i]);

    }

    for(i=0;i<n;i++)
    {
    crr[i]=arr[i]+brr[i];

    }
    printf("\n addition\n");
    for(i=0;i<n;i++)
    {


    printf("\n %d",crr[i]);
    }




}
