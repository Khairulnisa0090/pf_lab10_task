
#include <stdio.h>

int main()
{
    int rollNo;
    char name[50];
    float marks;

    // Open file in read mode
    FILE *fptr = fopen("marks.txt", "r");

    // Check if file exists
    if (fptr == NULL)
    {
        printf("Error: File Not Found!");
        return 1;
    }

    // Display table heading
    printf("\n---------------------------------\n");
    printf("Roll No     Name       Marks\n");
    printf("---------------------------------\n");

    // Read records until end of file
    while (fscanf(fptr, "%d %49s %f",
                  &rollNo, name, &marks) == 3)
    {
        printf("%-12d %-10s %.2f\n",
               rollNo, name, marks);
    }

    printf("---------------------------------\n");

    // Close file
    fclose(fptr);

    return 0;
}

