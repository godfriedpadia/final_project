#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    if (x > y) {
        printf("x is greater than y\n");
    } else if (y > x) {
        printf("y is greater than x\n");
    } else {
        printf("x and y are equal\n");
    }

    return 0;
}
