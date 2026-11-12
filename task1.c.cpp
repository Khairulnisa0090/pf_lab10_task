
#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[500];
    char updated[600];

    // Take complete feedback from user
    printf("Enter Customer Feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    // Calculate total characters
    printf("\nTotal Characters: %d\n", strlen(feedback));

    // Check whether good or bad exists
    if (strstr(feedback, "good") != NULL)
    {
        printf("Sentiment: Positive Review\n");
    }

    if (strstr(feedback, "bad") != NULL)
    {
        printf("Sentiment: Negative Review\n");

        // Find the location of bad
        char *pos = strstr(feedback, "bad");

        // Copy characters before bad
        strcpy(updated, "");
        strncat(updated, feedback, pos - feedback);

        // Replace bad with not good
        strcat(updated, "not good");

        // Add remaining characters
        strcat(updated, pos + 3);

        printf("Updated Review: %s", updated);
    }

    if (strstr(feedback, "good") == NULL &&
        strstr(feedback, "bad") == NULL)
    {
        printf("Sentiment: Neutral Review\n");
    }

    return 0;
}

