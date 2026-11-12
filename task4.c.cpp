
#include <stdio.h>

int main()
{
    char name[50];
    int accountNumber;
    float amount;

    // Input customer details
    printf("Enter Customer Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    // Open file in append mode
    FILE *fptr = fopen("bank_log.txt", "a");

    // Check file pointer
    if (fptr == NULL)
    {
        printf("Error: File could not be opened!");
        return 1;
    }

    // Write transaction details
    fprintf(fptr, "Customer Name: %s\n", name);
    fprintf(fptr, "Account Number: %d\n", accountNumber);
    fprintf(fptr, "Withdrawal Amount: %.2f\n", amount);
    fprintf(fptr, "--------------------------\n");

    // Close file
    fclose(fptr);

    printf("\nTransaction Saved Successfully!");

    return 0;
}

