#include <stdio.h>

int main()
{
    int i;
    int s = 0;

    for(i = 1; i <=10; i++)
    {
        s += i;
    }

    printf("%d\n",s);

    return 0;
}
