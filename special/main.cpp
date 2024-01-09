#include <stdio.h>
#include <string.h>

int main()
{

    const int MAX_QUANTITY = 10;

    const char productList[MAX_QUANTITY][50] = {"Milk", "Bread", "Eggs", "Cheese", "Cereal", "Coffee", "Chicken", "Rice", "Tomatoes", "Bananas"};
    const float priceList[MAX_QUANTITY] = {20000, 4000, 15000, 24000, 10000, 15000, 50000, 70000, 30000, 14000};
    
    for (int i = 0; i < MAX_QUANTITY; i++) 
    {
        printf("%d) %-50s %f\n", i + 1, productList[i], priceList[i]);
    }

    int indexes[MAX_QUANTITY];
    int quantity[MAX_QUANTITY];
    int i = 0;
    char temp[255];
    do
    {
        printf("\nEnter the Product Code (Enter 0 to End The Program): ");
        scanf("%d", &indexes[i]);

        if (indexes[i] == 0)
            break;
        indexes[i]--;
        if (indexes[i] < 0 && indexes[i] >= MAX_QUANTITY)
        {
            printf("\nInvalid Product Code. Please enter a valid code.\n");
            continue;
        }
        printf("\nQuantity: ");
        scanf("%d", &quantity[i]);
        i++;
    } while (1);

    if (i > 0)
    {
        float totalPrice = 0;
        float singleTotal;
        printf("\nShopping Details:\n");
        printf("______________________________________________________________________\n");
        printf("ID\tProduct\t\tQuantity\tPrice\t\t\tTotal\n");
        printf("______________________________________________________________________\n");

        for (int j = 0; j < i; j++)
        {
            singleTotal = quantity[j] * priceList[indexes[j]];
            printf("%d\t%-20s%d\t\t%f\t\t%f\n", j + 1, productList[indexes[j]], quantity[j], priceList[indexes[j]], singleTotal);
            totalPrice += singleTotal;
        }

        printf("______________________________________________________________________\n");
        printf("\nTotal Price: %f\n", totalPrice);
    }
    else
    {
        printf("\nNo items selected. Exiting program.\n");
    }
}