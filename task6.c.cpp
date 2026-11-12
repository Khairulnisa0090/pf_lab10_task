
#include <stdio.h>
#include <string.h>

int main()
{
    char username[50];
    char password[50];

    char savedUsername[50];
    char savedPassword[50];

    // Input username and password
    printf("Enter Username: ");
    scanf("%49s", username);

    printf("Enter Password: ");
    scanf("%49s", password);

    // Open credentials file
    FILE *fptr = fopen("credentials.txt", "r");

    // Check file
    if (fptr == NULL)
    {
        printf("Error: Credentials File Not Found!");
        return 1;
    }

    // Read saved username and password
    fscanf(fptr, "%49s %49s",
           savedUsername, savedPassword);

    // Compare entered and saved details
    if (strcmp(username, savedUsername) == 0 &&
        strcmp(password, savedPassword) == 0)
    {
        printf("\nAccess Granted!");
    }
    else
    {
        printf("\nAccess Denied!");
    }

    // Close file
    fclose(fptr);

    return 0;
}

