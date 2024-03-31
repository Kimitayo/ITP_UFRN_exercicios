#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) { 
        int pa, pb;
        double ga, gb;
        int anos = 0;
        
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        while (pa <= pb) {
            pa *= (ga / 100) + 1.0;
            pb *= (gb / 100) + 1.0;

            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}
