// Define a structure “complex” (typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.

#include <stdio.h>

// Define the complex structure using typedef
typedef struct
{
    float real;
    float imag;
} complex;

// Function to add two complex numbers
complex addComplex(complex c1, complex c2)
{
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
complex subtractComplex(complex c1, complex c2)
{
    complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to display a complex number
void displayComplex(complex c)
{
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main()
{
    complex c1, c2, sum, diff;

    // Input first complex number
    printf("Enter the real and imaginary part of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter the real and imaginary part of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Perform addition and subtraction
    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);

    // Display results
    printf("\nSum of the two complex numbers: ");
    displayComplex(sum);

    printf("Difference of the two complex numbers: ");
    displayComplex(diff);

    return 0;
}
