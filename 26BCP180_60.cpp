#include <stdio.h>
int main ()

{
    int a,b;

    printf("prime numbers between 1 and 500 are :\n");



for(a=2;a<=500;a++)
   {for(b=2;b<=a;b++)
       {
            if(a%b==0)
            {
                break ;
            }

       }
    if(a==b)
    printf("%d\n",a);
   }






return 0;

}
