#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote.\n");
    } else {
        printf("You are too young to vote.\n");
    }

    return 0;
}
