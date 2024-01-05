#include<stdio.h>

int main()
{
    unsigned int a, b;
    scanf("%d %d", &a, &b);
    for (; b != 0 ;)
    {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);

    if (b == 0)
    {
        printf("ERROR");
    }
    
    return 0;
}