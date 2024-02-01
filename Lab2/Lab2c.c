#include <stdio.h>

// Define constants
#define UNIT_CHEDDAR (5.00)
#define UNIT_SWISS (5.50)
#define UNIT_GOUDA (6.00)

int main() {
    // Define variables for counting the quantity and total price of each cheese
    int quantity_cheddar, quantity_swiss, quantity_gouda;
    float price_cheddar, price_swiss, price_gouda;

    // Attempt to open the input file
    FILE *input_file = fopen("input.txt", "r");
    if(input_file == NULL) {
        printf("File wasn't able to be opened.\n");
        return -1;
    }

    // Scan the file for units of cheddar, swiss, and gouda
    fscanf(input_file, "%d", &quantity_cheddar);
    fscanf(input_file, "%d", &quantity_swiss);
    fscanf(input_file, "%d", &quantity_gouda);

    // Close the input file
    fclose(input_file);

    // Cancel the order if any quantity of cheese is negative
    if(quantity_cheddar < 0 || quantity_swiss < 0 || quantity_gouda < 0) {
        printf("Cannot order a negative quantity. Order cancelled.");
        return -1;
    }

    // Cancel the order if no cheese was ordered.
    if(quantity_cheddar + quantity_swiss + quantity_gouda == 0) {
        printf("No products ordered. Order cancelled.");
        return -1;
    }

    // Calculate the total prices for each cheese
    price_cheddar = quantity_cheddar * UNIT_CHEDDAR;
    price_swiss = quantity_swiss * UNIT_SWISS;
    price_gouda = quantity_gouda * UNIT_GOUDA;

    // Define and calculate the subtotal, 5% tax, and total
    float subtotal = price_cheddar + price_swiss + price_gouda;
    float tax = subtotal * 0.05;
    float total = subtotal + tax; 

    // Open an output file
    FILE *output_file = fopen("output.txt", "w");

    // Print out the column titles and header line
    fprintf(output_file, "%-9s%11s%12s%12s\n", "QTY", "DESCRIPTION", "UNIT PRICE", "TOTAL");
    fprintf(output_file, "--------------------------------------------\n");

    // Print out the rows for each cheese only if their quantity > 0
    if(quantity_cheddar > 0) fprintf(output_file, "%-9d%11s%12.2f%12.2f\n", quantity_cheddar, "Cheddar", UNIT_CHEDDAR, price_cheddar);
    if(quantity_swiss > 0) fprintf(output_file, "%-9d%11s%12.2f%12.2f\n", quantity_swiss, "Swiss", UNIT_SWISS, price_swiss);
    if(quantity_gouda > 0) fprintf(output_file, "%-9d%11s%12.2f%12.2f\n", quantity_gouda, "Gouda", UNIT_GOUDA, price_gouda);

    // Print another line across the screen
    fprintf(output_file, "--------------------------------------------\n");

    // Print out the subtotal, tax, and total lines
    fprintf(output_file, "%32s%12.2f\n", "SubTotal", subtotal);
    fprintf(output_file, "%32s%12.2f\n", "Tax", tax);
    fprintf(output_file, "%32s%12.2f\n", "Total", total);

    // Close the output file
    fclose(output_file);

    // Return 0
    return 0;
}
