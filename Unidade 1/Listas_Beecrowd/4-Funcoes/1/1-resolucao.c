#include <stdio.h>


int soma_divisores(int value) {
    int soma = 0; // Inicializa soma como 0
    for (int i = 1; i < value; i++) { 
        if (value % i == 0) {
            soma += i;
        }
    }
    return soma;
}


int testa_amigos(int a, int b) {
    return a != b && soma_divisores(a) == b && soma_divisores(b) == a;
}

int main() {
    int A, B, C, D;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);

    int amigos_encontrados = 0;

   
    for (int i = A; i <= B; i++) {
        for (int j = C; j <= D; j++) {
            if (testa_amigos(i, j)) {
                printf("O %d possui um amigo!\n", i);
                amigos_encontrados++;
                break; 
            }
        }
    }


    if (amigos_encontrados == 0) {
        printf("Os intervalos nao apresentam amigos!");
    }

    return 0;
}
