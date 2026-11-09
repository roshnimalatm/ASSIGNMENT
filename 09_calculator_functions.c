#include <stdio.h>
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b, int *error) {
    if (b == 0) { *error = 1; return 0; }
    return a / b;
}
float calculate(float a, float b, char op, int *error) {
    switch (op) {
        case '+': return add(a, b);
        case '-': return subtract(a, b);
        case '*': return multiply(a, b);
        case '/': return divide(a, b, error);
        default: *error = 2; return 0;
    }
}
int main(void) {
    float a, b, result;
    char op;
    int error = 0;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    result = calculate(a, b, op, &error);
    if (error == 1) printf("Error: Division by zero is not allowed.");
    else if (error == 2) printf("Invalid operator.");
    else printf("Result = %.2f", result);
    return 0;
}
