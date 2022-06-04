// switch case statement for integer
#include<stdio.h>
int main()
{
    int value;
    printf("Enter the value\n");
    fflush(stdout);
    scanf("%d",&value);
    switch(value)
    {
        case 1 :
            printf("the value is 1:\n");
            break;
        case 2 :
            printf("the value is 2:\n");
            break;
        case 3 :
            printf("the value is 3\n");
            break;
        default:
            printf("the value is greater than 3:\n");
            break;
    }
    return 0;
}