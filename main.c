#include <stdio.h>

int main() {
    int number;

    printf("Enter an number: ");
    scanf("%d", &number);

    if (number > 10) {
        printf("This number is higher than 10 \n");
        printf("You entered %d.\n", number);
    } else {
        printf("This is lower than 10 \n");
    }
    printf("Type: ./main to restart \n");
    return 0;
}
