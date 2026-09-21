#include<stdio.h>

void main()
{

    int arr[20];
    int n;
    int i;
    int sum=0;
    float avg;


    printf("Enter Limit:");
    scanf("\n %d",&n);

    for(i=0;i<n;i++)

    {
        printf("\n Enter value %d: ",i+1);
        scanf("%d ",&arr[i]);


        sum=sum+arr[i] ;
    }

    avg=sum/n;
    for(i=0;i<n;i++)

    {
        printf("\n Enter value %d",i+1);

    }

     printf("\n Sum: ",sum);
    printf("\n %f.2 float: ",avg);

}
