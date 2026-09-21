#include<stdio.h>

void tower(int n, char source,char helper, char destination)
{
    if(n==1)
    {

        printf("Move disk 1 from %c to %c \n ");
        return;

    }

    tower(n -1, source, destination, helper);

    printf("Move disk %d from %c to %c \n",n,source,destination);

    tower(n -1, helper, source, destination);

}

void main()
{

    int n;

    printf("Enter number of disk: ");
    scanf("\n %d",&n);

    tower(n,'A','B','C');
}
