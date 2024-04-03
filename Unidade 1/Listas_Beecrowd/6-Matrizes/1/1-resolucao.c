#include <stdio.h>
#include <math.h>

int main(void) {
    int linhas, colunas;
    int exp;
    int base = 2;
    long calculo;
    
    while (scanf("%d", &linhas) != EOF && linhas != 0) {
        colunas = linhas;

        int matriz[linhas][colunas];
        int i, j;

        int maior_num = 0;
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                exp = i + j;
                matriz[i][j] = pow(base, exp);
                if (matriz[i][j] > maior_num) {
                    maior_num = matriz[i][j];
                }
            }
        }
        
        int t = 0;
        int temp = maior_num;
        while (temp > 0) {
            t++;
            temp /= 10;
        }
        
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                printf("%*d", t, matriz[i][j]);
                if (j < colunas - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
