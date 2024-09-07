// Write a program to read RollNo, Name, Address, Age & average-marks of 12 students in the BCT class and display the details from function.

#include <stdio.h>

// Define the structure for student details
typedef struct
{
    int rollNo;
    char name[100];
    char address[150];
    int age;
    float avgMarks;
} Student;

// Function to read details of students
void readStudentDetails(Student students[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // Consume newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline

        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        students[i].address[strcspn(students[i].address, "\n")] = '\0'; // Remove newline

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Average Marks: ");
        scanf("%f", &students[i].avgMarks);

        getchar(); // Consume newline character left by scanf

        printf("\n");
    }
}

// Function to display details of students
void displayStudentDetails(Student students[], int count)
{
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].avgMarks);
        printf("\n");
    }
}

int main()
{
    Student students[12];

    // Read student details
    readStudentDetails(students, 12);

    // Display student details
    displayStudentDetails(students, 12);

    return 0;
}
