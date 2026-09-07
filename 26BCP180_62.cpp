#include <stdio.h>
int main ()

{
    int a,b,c=0;

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
   {
    c++;
    printf("%d\n",a);
   }



   }
printf("\n\nno of prime numbers in between 1 and 500 is : %d\n\n",c);

return 0;

}
