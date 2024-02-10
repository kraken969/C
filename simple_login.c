#include <stdio.h>
#include <string.h>

int main() {
    char userName[] = "username";
    int passWord = 123456;
    char inputName[10];
    int inputPass;

    printf("Enter your Username : ");
    scanf("%s", inputName);

    if (strcmp(inputName, userName) == 0) {
        printf("Enter your password : ");
        scanf("%d", &inputPass);

        if (inputPass == passWord) {
            printf("You're now logged in\n");
        } else {
            printf("Password is incorrect\n");
        }
    } else {
        printf("Username is incorrect\n");
    }

    return 0;
}

// userName ကြိုက်တာထည့်
// passWord ကြိုက်တာပြောင်းထည့်
// Owned By PERFECT-X
