#include <stdio.h>

int main() {
    int i;
    printf("Enter 10 numbers: ");
    
    for(i = 0; i < 10; ++i) {
        scanf("%d", &numbers[i]);
    }
    
    // Perform some calculations with the given array of integers
    for(i = 0; i < 10; ++i) {
        printf("The value at index %d is: %d\n", i, numbers[i]);
    }
    
    return 0;
}
