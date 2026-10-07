#include <stdio.h>

int main() {
    int n, i, reg_no, marks;
    char name[50];
    char grade_if, grade_switch;

    printf("How many students? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nStudent %d\n", i);
        printf("Registration number: ");
        scanf("%d", &reg_no);
        printf("Name: ");
        scanf("%s", name);
        printf("Marks: ");
        scanf("%d", &marks);

        /* grade using elseif */
        if (marks >= 70) {
            grade_if = 'A';
        } else if (marks >= 60) {
            grade_if = 'B';
        } else if (marks >= 50) {
            grade_if = 'C';
        } else if (marks >= 40) {
            grade_if = 'D';
        } else {
            grade_if = 'F';
        }

        /* grade using switch-case */
        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade_switch = 'A';
                break;
            case 6:
                grade_switch = 'B';
                break;
            case 5:
                grade_switch = 'C';
                break;
            case 4:
                grade_switch = 'D';
                break;
            default:
                grade_switch = 'F';
        }

        printf("===STUDENT INFORMATION===\n");
        printf("Registration No: %d\n", reg_no);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);

        /* elseif version results */
        printf("\n[if-else]  Grade: %c  ", grade_if);
        if (marks >= 40) {
            printf("Status: PASSED\n");
        } else {
            printf("Status: FAILED\n");
        }

        /* switch version results */
        printf("[switch]   Grade: %c  ", grade_switch);
        switch (grade_switch) {
            case 'F':
                printf("Status: FAILED\n");
                break;
            default:
                printf("Status: PASSED\n");
        }
        printf("---------------------------------\n");
    }

    return 0;
}
