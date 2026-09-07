#include <stdio.h>

int main()
{
    int a, b, c = 0, d;


    printf("Enter an integer: ");
    scanf("%d", &a);


    b = a;


    while (a != 0)
        {
            d = a % 10;
            c = c * 10 + d;
            a=a/10;
        }


    if (b == c)
        {
            printf("%d is a palindrome number.\n", b);
        }
    else
        {
            printf("%d is not a palindrome number.\n", b);
        }

    return 0;
}
