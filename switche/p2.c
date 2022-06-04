// swtich case statement for charater
#include<stdio.h>
int main()
{
    char value;
    printf("Enter the charater\n");
    fflush(stdout);
    scanf("%c",&value);

    switch(value)
    {
        case 'a' :
            printf("the value is a \n");
            break;
        case 'b' :
            printf("the value is b\n");
            break;
        case 'c' :
            printf("the value is c\n");
            break;
        default:
        printf("default:\n");
    }
    return 0;
}