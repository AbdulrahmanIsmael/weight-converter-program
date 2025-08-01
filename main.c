#include <stdio.h>

void convertWeight(float weight)
{
    printf("Enter weight in Kilograms: ");
    scanf("%f", &weight);
    weight *= 2.20462;
    printf("Weight in Pounds: %.3f\n", weight);
}

int main()
{
    int choice = 1;
    float weight = 0.0f;

    printf("Welcome to The Weight Converter Program\n");
    printf("This program converts weights between Kilograms and Pounds.\n\n");

    printf("Please choose an option: \n");
    printf("1- Kilograms to Pounds\n");
    printf("2- Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        convertWeight(weight);
        break;
    case 2:
        convertWeight(weight);
        break;
    default:
        printf("Invalid choice\n\n");
    }

    printf("Thank you, Write (0) to exit the program or any other number to try new value: ");
    int choice = 0;
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        printf("Exiting the program.\n");
        break;
    default:
        main();
    }

    return 0;
}