#include <stdio.h>

int main()
{
    int a;
    int n;
    int i;
    int j;
    scanf("%d %d",&a,&n);

    if(a == 1)
    {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }
    else if(a == 2)
    {
        for(i = n; i >= 1; i--)
        {
            for(j = i; j >= 1; j--)
            {
                printf("%d",i);
            }
            printf("\n");
        }
    }

    else if(a == 3)
    {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }


}
