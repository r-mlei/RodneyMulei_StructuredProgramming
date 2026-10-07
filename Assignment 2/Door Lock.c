#include <stdio.h>
#include <string.h>

int main() {
    char correct_pin[] = "1234";
    char pin[20];
    int attempts = 3;
    int granted = 0;
    int choice, i;

    while (attempts > 0 && granted == 0) {
        printf("Enter 4-digit PIN: ");
        scanf("%19s", pin);



        if (strlen(pin) < 4) {
            printf("PIN is too short (must be 4 digits)\n");
        } else if (strlen(pin) > 4) {
            printf("PIN is too long (must be 4 digits)\n");
        } else {
            printf("PIN is exactly 4 digits\n");
        }


        if (strcmp(pin, correct_pin) == 0) {
            granted = 1;
        } else {
            attempts--;
            printf("Wrong PIN. Remaining attempts: %d\n", attempts);
        }
    }



    if (granted == 0) {
        printf("System locked! Wait for 5 seconds...\n");
        for (i = 5; i >= 1; i--) {
            printf("%d... ", i);
        }
        printf("\nYou can try again now.\n");
        return 0;
    }

    do {
        printf("\n=== Device Menu ===\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
