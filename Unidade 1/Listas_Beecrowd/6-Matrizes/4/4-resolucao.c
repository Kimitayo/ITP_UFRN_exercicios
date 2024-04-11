#include <stdio.h>

int main(void) {
  int n, m;

  while (scanf("%d %d", &n, &m) != EOF) {
    int matriz[n][m];

    // Montando a matriz
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        scanf("%d", &matriz[i][j]);
      }
    }

    // Montando a matriz de saída
    for (int i = 0; i < n; i++) { //0
      for (int j = 0; j < m; j++) { //1

        if (matriz[i][j] == 1) {
          printf("9");
        } else {
          int contador = 0;
          if (i > 0) contador += matriz[i - 1][j];
          if (i < n - 1) contador += matriz[i + 1][j];
          if (j > 0) contador += matriz[i][j - 1];
          if (j < m - 1) contador += matriz[i][j + 1];
          printf("%d", contador);
        }
      }
      printf("\n");
    }
  }
  return 0;
}
