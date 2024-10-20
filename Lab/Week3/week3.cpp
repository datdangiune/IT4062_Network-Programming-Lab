#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_LINE_LENGTH 255

typedef struct {
    char username[50];
    char password[50];
    int status; // 1: active, 0: blocked, 2: idle
    char homepage[100]; // Can be IP address or domain name
} User;

User users[MAX_USERS];
int userCount = 0;
int loggedInUser = -1; // Store the index of the logged-in user

void load_users() {
    FILE *file = fopen("nguoidung.txt", "r");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }
    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%s %s %d %s", users[userCount].username, users[userCount].password, &users[userCount].status, users[userCount].homepage);
        userCount++;
    }
    fclose(file);
}

void save_users() {
    FILE *file = fopen("nguoidung.txt", "w");
    if (!file) {
        printf("Error opening file for writing!\n");
        return;
    }
    for (int i = 0; i < userCount; i++) {
        fprintf(file, "%s %s %d %s\n", users[i].username, users[i].password, users[i].status, users[i].homepage);
    }
    fclose(file);
}

void register_user() {
    if (userCount >= MAX_USERS) {
        printf("User limit reached!\n");
        return;
    }
    User newUser;
    printf("Enter username: ");
    scanf("%s", newUser.username);
    printf("Enter password: ");
    scanf("%s", newUser.password);
    newUser.status = 2; // Default to idle
    printf("Enter homepage (domain or IP): ");
    scanf("%s", newUser.homepage);
    users[userCount++] = newUser;
    save_users();
    printf("User registered successfully!\n");
}

void activate_user() {
    if (loggedInUser == -1) {
        printf("You need to sign in first!\n");
        return;
    }
    if (users[loggedInUser].status == 2) { // idle
        printf("Account is idle. Do you want to activate it? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y') {
            users[loggedInUser].status = 1; // activate account
            save_users();
            printf("Account activated successfully!\n");
        } else {
            printf("Account remains idle.\n");
        }
    } else {
        printf("Account is already active or blocked.\n");
    }
}

void sign_in() {
    char username[50], password[50];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            if (users[i].status == 0) {
                printf("Account is blocked!\n");
            } else if (users[i].status == 2) {
                loggedInUser = i;
                printf("Account is not activated!\n");
                activate_user(); // Ask to activate the account
            } else {
                loggedInUser = i;
                printf("Login successful!\n");
            }
            return;
        }
    }
    printf("Invalid username or password!\n");
}

void change_password() {
    if (loggedInUser == -1) {
        printf("You need to sign in first!\n");
        return;
    }
    char oldPassword[50], newPassword[50];
    printf("Enter old password: ");
    scanf("%s", oldPassword);
    if (strcmp(users[loggedInUser].password, oldPassword) != 0) {
        printf("Incorrect old password!\n");
        return;
    }
    printf("Enter new password: ");
    scanf("%s", newPassword);
    strcpy(users[loggedInUser].password, newPassword);
    save_users();
    printf("Password changed successfully!\n");
}

void update_account_info() {
    if (loggedInUser == -1) {
        printf("You need to sign in first!\n");
        return;
    }
    printf("Enter new homepage (domain or IP): ");
    scanf("%s", users[loggedInUser].homepage);
    save_users();
    printf("Account info updated successfully!\n");
}

void reset_password() {
    char username[50];
    printf("Enter username to reset password: ");
    scanf("%s", username);
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0) {
            strcpy(users[i].password, "default123"); // Default password
            save_users();
            printf("Password reset to default (default123)!\n");
            return;
        }
    }
    printf("Username not found!\n");
}

void view_login_history() {
    if (loggedInUser == -1) {
        printf("You need to sign in first!\n");
        return;
    }
    printf("Login history is not yet implemented.\n"); // Placeholder for actual history implementation
}

void homepage_with_domain() {
    if (loggedInUser == -1) {
        printf("You need to sign in first!\n");
        return;
    }
    printf("Homepage (domain): %s\n", users[loggedInUser].homepage);
}

void homepage_with_ip() {
    if (loggedInUser == -1) {
        printf("You need to sign in first!\n");
        return;
    }
    printf("Homepage (IP): %s\n", users[loggedInUser].homepage);
}

void log_out() {
    if (loggedInUser == -1) {
        printf("No user is logged in!\n");
    } else {
        printf("Logged out successfully!\n");
        loggedInUser = -1;
    }
}

void show_menu() {
    int choice;
    do {
        printf("\nUSER MANAGEMENT PROGRAM\n");
        printf("1. Register\n");
        printf("2. Sign in\n");
        printf("3. Change password\n");
        printf("4. Update account info\n");
        printf("5. Reset password\n");
        printf("6. View login history\n");
        printf("7. Homepage with domain name\n");
        printf("8. Homepage with IP address\n");
        printf("9. Log out\n");
        printf("Your choice (1-9, other to quit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                register_user();
                break;
            case 2:
                sign_in();
                break;
            case 3:
                change_password();
                break;
            case 4:
                update_account_info();
                break;
            case 5:
                reset_password();
                break;
            case 6:
                view_login_history();
                break;
            case 7:
                homepage_with_domain();
                break;
            case 8:
                homepage_with_ip();
                break;
            case 9:
                log_out();
                break;
            default:
                printf("Exiting program.\n");
        }
    } while (choice >= 1 && choice <= 9);
}

int main() {
    load_users();
    show_menu();
    return 0;
}

