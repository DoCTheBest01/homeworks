#include<stdio.h>

float abs(float x)
{
    if (x > 0)
        return x;
    return x * -1;
}
float pow(float a, float b)
{
    float result = 1;
    for (int i = 0; i < abs(b); i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    unsigned int a, b;
    scanf("%d %d", &a, &b);
    int p = pow((float)a, (float)b);
    printf("%d", p);
    return 0;
}

