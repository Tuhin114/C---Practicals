// Write a program to add two distances in feet and inches using structure

#include <stdio.h>

// Define the structure for distance
typedef struct
{
    int feet;
    int inches;
} Distance;

// Function to add two distances
Distance addDistances(Distance d1, Distance d2)
{
    Distance result;

    // Add feet and inches separately
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // If inches exceed 12, convert to feet
    if (result.inches >= 12)
    {
        result.feet += result.inches / 12;
        result.inches = result.inches % 12;
    }

    return result;
}

// Function to display a distance
void displayDistance(Distance d)
{
    printf("Feet: %d, Inches: %d\n", d.feet, d.inches);
}

int main()
{
    Distance d1, d2, sum;

    // Input first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    // Input second distance
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    // Add the two distances
    sum = addDistances(d1, d2);

    // Display the sum
    printf("\nThe total distance is: ");
    displayDistance(sum);

    return 0;
}
