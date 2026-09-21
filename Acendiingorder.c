#include<stdio.h>

void main()
{
    int array[10];
    int i;
    int order=0;
    int j;
    int temp;

    for(i=0;i<10;i++)
    {

        printf("\n Enter Element %d:",i+1);
        scanf("\n %d",&array[i]);
    }


    for(i=0;i<10;i++)
    {
      for(j=i+1;j<10;j++)
      {
          if(array[i]>array[j])
          {
              temp=array[i];
              array[i]=array[j];
              array[j]=temp;

          }
      }

    }





    printf("\n Sorted Elements are as follows:\n");



    for(i=0;i<10;i++)
    {
        printf("\n %d",array[i]);
    }
}
