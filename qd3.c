#include <stdio.h>
#include <stdlib.h>

struct Product
{
    int code;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    int n, i;
    struct Product **ptr;

    printf("Enter number of products: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of products.\n");
        return 1;
    }

    // Allocate memory for array of structure pointers
    ptr = (struct Product **)malloc(n * sizeof(struct Product *));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Allocate memory for each product
    for (i = 0; i < n; i++)
    {
        ptr[i] = (struct Product *)malloc(sizeof(struct Product));

        if (ptr[i] == NULL)
        {
            printf("Memory allocation failed.\n");

            for (int j = 0; j < i; j++)
                free(ptr[j]);

            free(ptr);
            return 1;
        }

        printf("\nEnter details of Product %d:\n", i + 1);

        printf("Product Code: ");
        scanf("%d", &ptr[i]->code);

        printf("Product Name: ");
        scanf(" %[^\n]", ptr[i]->name);

        printf("Quantity: ");
        scanf("%d", &ptr[i]->quantity);

        printf("Price: ");
        scanf("%f", &ptr[i]->price);
    }

    // Display product details
    printf("\n--- Product Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Code     : %d\n", ptr[i]->code);
        printf("Name     : %s\n", ptr[i]->name);
        printf("Quantity : %d\n", ptr[i]->quantity);
        printf("Price    : %.2f\n", ptr[i]->price);
    }

    // Release allocated memory
    for (i = 0; i < n; i++)
    {
        free(ptr[i]);
        ptr[i] = NULL;
    }

    free(ptr);
    ptr = NULL;

    return 0;
}