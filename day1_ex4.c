#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int i;
    int sum = 0;
    scanf("%d %d %d",&a ,&b ,&c);
    for(i = a; i <= b; i += c)
    {
        sum += i;
    }
    printf("%d",sum);

    return 0;

}
