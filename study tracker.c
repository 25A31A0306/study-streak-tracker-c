#include <stdio.h>

int currentStreak = 0;
int longestStreak = 0;

void studiedToday() {
    currentStreak++;

    if (currentStreak > longestStreak) {
        longestStreak = currentStreak;
    }

    printf("\nStudy session recorded.\n");
    printf("Current streak: %d days\n", currentStreak);
}

void viewStats() {
    printf("\n===== STATISTICS =====\n");
    printf("Current Streak: %d days\n", currentStreak);
    printf("Longest Streak: %d days\n", longestStreak);
}

void resetStreak() {
    currentStreak = 0;
    printf("\nCurrent streak has been reset.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== STUDY STREAK TRACKER =====\n");
        printf("1. Studied Today\n");
        printf("2. View Statistics\n");
        printf("3. Reset Streak\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                studiedToday();
                break;

            case 2:
                viewStats();
                break;

            case 3:
                resetStreak();
                break;

            case 4:
                printf("Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}