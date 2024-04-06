#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int i;
    int sum = 0;
    scanf("%d %d",&a,&b);
    if(a < b)
    {
        for(i = a; i <= b; i++)
        {
            sum += i;
        }
    }
    else if(a>b)
    {
        for(i = b; i <=a; i++)
        {
            sum += i;

        }
    }
    printf("%d",sum);
    printf("\n");

    sum = 0;
    if(a > b)
    {
        c=a;
        a=b;
        b=c;
    }
    for(i = a; i <= b; i++)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}
