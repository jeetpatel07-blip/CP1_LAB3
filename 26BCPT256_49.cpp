#include<stdio.h>
int main()

{
    int a ;
    printf("------no that are divisible by 5 between 1 to 100------\n\n\n\n");
    for(a=1;a<=100;a++)
    {
        if(a%5==0)
        {
            printf("%d\n",a);
        }
    }


}
