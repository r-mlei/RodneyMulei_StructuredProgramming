#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("%.2f\n", a + b); break;
        case '-': printf("%.2f\n", a - b); break;
        case '*': printf("%.2f\n", a * b); break;
        case '/': printf("%.2f\n", a / b); break;
        default:  printf("Invalid operator\n");
    }
    return 0;
}
