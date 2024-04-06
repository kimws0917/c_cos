#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    for(i = 1; i <= 10; i+=2)
    {
        printf("%d ", i);
    }

    printf("\n");

    for(i = 10; i <=20; i+=2)
    {
        printf("%d ",i);
    }
    printf("\n");


    for(i = 3; i<=15; i += 3)
    {
        printf("%d ", i);
    }
    printf("\n");

    for(i = 9; i >= 1; i--)
    {
        printf("%d ",i);
    }
    printf("\n");

    for(i = 99; i >=11; i -= 11)
    {
        printf("%d ",i);
    }




    return 0;
}
