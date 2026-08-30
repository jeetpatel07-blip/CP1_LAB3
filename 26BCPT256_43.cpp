#include <stdio.h>
int main ()

{
    int a,b , c=0 ;

    for(a=1 ; a<=100 ; a++)
    {
        if (a%13==0)
        {c = c + a ;}

    }
printf("\n\n\nthe sum all the number that is divisible by 13 between 1 and 100 : %d\n\n\n",c);
return 0 ;

}
