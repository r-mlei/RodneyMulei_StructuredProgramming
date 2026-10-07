#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void) {
    double radius, area;

    printf("Enter the radius of the sphere: ");
    if (scanf("%lf", &radius) != 1 || radius < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
        return 1;
    }

    area = 4 * PI * pow(radius, 2);

    printf("Surface area of the sphere = %.2f\n", area);

    return 0;
}
