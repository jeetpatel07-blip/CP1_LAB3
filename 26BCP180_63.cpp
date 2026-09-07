#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,c=0,d,e,f;
    printf("enter a number to check if it is automorphic :");
    scanf("%d",&a);
    f=a;
     b=a*a;


    for (;a!=0;a=a/10)
       {
         c++;
       }

    d = pow(10,c);
    e=b%d;



if(e==f)
    printf("the number is automorphic");
else
    printf("the number is not automorphic");

return 0;
}
