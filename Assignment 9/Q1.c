// Write a program to create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee. Finally display these members‟ value.

#include <stdio.h>

// Define a structure named 'company'
struct company
{
    char name[100];
    char address[150];
    char phone[20];
    int noOfEmployee;
};

int main()
{
    // Declare a variable of type 'company'
    struct company comp;

    // Input the name of the company
    printf("Enter the company name: ");
    fgets(comp.name, sizeof(comp.name), stdin);

    // Input the address of the company
    printf("Enter the company address: ");
    fgets(comp.address, sizeof(comp.address), stdin);

    // Input the phone number of the company
    printf("Enter the company phone number: ");
    fgets(comp.phone, sizeof(comp.phone), stdin);

    // Input the number of employees in the company
    printf("Enter the number of employees: ");
    scanf("%d", &comp.noOfEmployee);

    // Display the company details
    printf("\n--- Company Details ---\n");
    printf("Company Name: %s", comp.name);
    printf("Company Address: %s", comp.address);
    printf("Company Phone: %s", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}
