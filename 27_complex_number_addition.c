#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex a, struct Complex b)
{
    struct Complex sum;

    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;

    return sum;
}

void displayComplex(struct Complex number)
{
    if (number.imaginary < 0)
        printf("%.2f - %.2fi\\n", number.real, -number.imaginary);
    else
        printf("%.2f + %.2fi\\n", number.real, number.imaginary);
}

int main(void)
{
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    sum = addComplex(num1, num2);

    printf("Sum = ");
    displayComplex(sum);

    return 0;
}
