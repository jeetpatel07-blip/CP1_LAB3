#include <stdio.h>
int main()

{
    int a,b ;
    printf("write the value of n : ");
    scanf("%d",&b);


    for(a=1;a<=(2*b);a++)
    {
        if (a%2!=0)
        printf("%d\n",a);

    }


return 0 ;

}
