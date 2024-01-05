#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            // printf("%d * %d = %d\n", n / i, i, n);
            printf("%d\n", i);
        }
    }
    
    return 0;
}
