#include<iostream>
#include<math.h>

int main()
{
    unsigned int a, b;
    scanf("%d %d", &a, &b);
    int p = pow((float)a, (float)b);
    printf("%d", p);
    return 0;
}