#include <stdio.h>
#include <stdlib.h>

int main() {
    // Prompt the user to enter their name
    printf("What is your name? ");
    char name[100];
    fgets(name, 100, stdin);

    // Print a greeting message
    printf("Hello, %s!\n", name);

    // Ask the user to enter their age
    printf("How old are you? ");
    int age;
    scanf("%d", &age);

    // Print out the user's age
    printf("You are %d years old.\n", age);

    return 0;
}
