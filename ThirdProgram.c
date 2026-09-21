#include<stdio.h>

void main()
{



int arr[5];
int brr[5];
int crr[10];
int i;
int j=0;

printf("Enter values of Arr \n");

for(i=0;i<5;i++)
{

    printf("Enter value %d :",i+1);
    scanf("%d",&arr[i]);

}


printf("Enter values of brr \n");

for(i=0;i<5;i++)
{

    printf("Enter value %d :",i+1);
    scanf("%d",&brr[i]);

}

for(i=0;i<5;i++)

{
crr[j]=arr[i];
    j++;

}

for(i=0;i<5;i++)

{
crr[j]=arr[i];
    j++;

}

for(i=0;i<5;i++)

{

printf("%d ", crr[i]);

}


}
