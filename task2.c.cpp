
#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][50];
    char temp[50];
    int i, j;

    // Input 10 student names
    printf("Enter 10 Student Names:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf(" %49[^\n]", names[i]);
    }

    // Bubble Sort
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            // Compare adjacent names
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                // Swap names
                strcpy(temp, names[j]);

                strcpy(names[j], names[j + 1]);

                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in Alphabetical Order:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}

