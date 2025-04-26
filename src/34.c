#include <stdio.h>

int main() {
    int i = 0;

    while(i < 10) {
        if(i % 2 == 0) {
            printf("%d ", i);
        } else {
            printf("Hello, World!");
        }
        i++;
    }

    return 0;
}
