#include <stdio.h>

int main()
{
    char subject[3][30];
    float hours[3], total = 0;
    int i, highest = 0;

    printf("================================\n");
    printf("       STUDYTRACK SYSTEM\n");
    printf("================================\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter subject name (one word): ");
        scanf("%29s", subject[i]);

        printf("Enter study hours: ");
        scanf("%f", &hours[i]);

        total = total + hours[i];

        if(hours[i] > hours[highest])
        {
            highest = i;
        }
    }

    printf("\n======= STUDY REPORT =======\n");

    for(i = 0; i < 3; i++)
    {
        printf("%s : %.2f hours\n", subject[i], hours[i]);
    }

    printf("\nTotal Study Hours: %.2f", total);
    printf("\nAverage Study Hours: %.2f", total / 3);
    printf("\nMost Studied Subject: %s", subject[highest]);

    printf("\n\n");

    if(total >= 6)
        printf("Excellent! Keep working hard.");
    else
        printf("Try to increase your study time.");

    printf("\n\nThank you for using STUDYTRACK!\n");

    return 0;
}
