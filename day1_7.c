#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;

    n = 5;

    for(i = 1; i <= n; i++)
    {

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
