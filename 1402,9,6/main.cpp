#include <iostream>

int main() 
{
    int number;
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("%d is odd", number);
    else
        printf("%d is even", number);
    return 0;
}   
