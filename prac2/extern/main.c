// using extern storage class 
#include<stdio.h>
void file_myfunc();
int privatedata;
int main()
{
     privatedata=50;
    printf("privatedata %d\n", privatedata);
   
    file_myfunc();
    printf("privatedata %d\n", privatedata);
}