#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);

    if (x > 0 && x <= 1000000) {
        while (x > 1) {
            printf("Ho ");
            x--;
        }

        if (x == 1) {
            printf("Ho!\n");
        }
    }

    return 0;
}
