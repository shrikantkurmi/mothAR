//write the program to calculate the income tax payable ofnthe user.
#include<stdio.h>
int main()
{
    int income;
    int tax;
    printf("Enter the income:\n");
    fflush(stdout);
    scanf("%d",&income);

    if(income<9525)
    {
        tax=0;
    }
    else if((income>9525)&&(income<=38700))
    {
            tax=income*0.12;
    }
    else if((income>38700)&&(income<=82500))
    {
            tax=income*0.24;
    }
    else if(income>82500)
    {
        tax=income*0.32;
        tax=tax+1000;
    }
    printf("tax payable is %d\n",tax);
return 0;
}
