
#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char domain[100];

    // Input email address
    printf("Enter Email Address: ");
    scanf("%99s", email);

    // Find @ symbol
    char *ptr = strchr(email, '@');

    // Check whether @ exists
    if (ptr == NULL)
    {
        printf("Invalid Email Format");
    }
    else
    {
        // Copy domain after @
        strcpy(domain, ptr + 1);

        printf("Extracted Domain: %s", domain);
    }

    return 0;
}

