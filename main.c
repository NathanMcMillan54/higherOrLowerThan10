#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Enter an number: ");
    scanf("%d", &number);
    printf("You entered %d.\n", number);

    if (number > 10) {
        printf("This number is higher than 10 \n");
    } else {
        printf("This is lower than 10 \n");
    }

    char question;
    printf("Would like do run this file again?");
    scanf("%s", &question);
    printf("You entered %d\n", question);
    if (question == 'Yes') {
        system("./main");
    } else {
        printf("Ok \n");
    }
    return 0;
}
