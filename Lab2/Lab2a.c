#include <stdio.h>

// Define constants
#define UNIT_CHEDDAR (5.00)
#define UNIT_SWISS (5.50)
#define UNIT_GOUDA (6.00)

int main() {
    // Define variables for counting the quantity and total price of each cheese
    int quantity_cheddar, quantity_swiss, quantity_gouda;
    float price_cheddar, price_swiss, price_gouda;

    // Query the user for units of cheddar, swiss, and gouda
    printf("Units of cheddar: ");
    scanf("%d", &quantity_cheddar);
    printf("Units of swiss: ");
    scanf("%d", &quantity_swiss);
    printf("Units of gouda: ");
    scanf("%d", &quantity_gouda);

    // Calculate the total prices for each cheese
    price_cheddar = quantity_cheddar * UNIT_CHEDDAR;
    price_swiss = quantity_swiss * UNIT_SWISS;
    price_gouda = quantity_gouda * UNIT_GOUDA;

    // Define and calculate the subtotal, 5% tax, and total
    float subtotal = price_cheddar + price_swiss + price_gouda;
    float tax = subtotal * 0.05;
    float total = subtotal + tax; 

    // Print out the column titles and header line
    printf("%-9s%11s%12s%12s\n", "QTY", "DESCRIPTION", "UNIT PRICE", "TOTAL");
    printf("--------------------------------------------\n");

    // Print out the rows for each cheese
    printf("%-9d%11s%12.2f%12.2f\n", quantity_cheddar, "Cheddar", UNIT_CHEDDAR, price_cheddar);
    printf("%-9d%11s%12.2f%12.2f\n", quantity_swiss, "Swiss", UNIT_SWISS, price_swiss);
    printf("%-9d%11s%12.2f%12.2f\n", quantity_gouda, "Gouda", UNIT_GOUDA, price_gouda);

    // Print another line across the screen
    printf("--------------------------------------------\n");

    // Print out the subtotal, tax, and total lines
    printf("%32s%12.2f\n", "SubTotal", subtotal);
    printf("%32s%12.2f\n", "Tax", tax);
    printf("%32s%12.2f\n", "Total", total);

    // Return 0
    return 0;
}
