#include <stdio.h>

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    double e = 1.0;
    for (int i = 1; i <= n; i++)
    {
        int fact = 1;
        for (int j = 1 ; j <= i ; j++) {
            fact *= j;
        }
        e += ( 1.0 / fact );
    }
    
    printf("%f\n", e);

}
