#include <stdio.h>

int main(void) {
  int n;
  
  scanf("%d", &n);
  
  int matriz[n+1][n+1];

  // Entrada dos elementos da matriz
  for (int i=0; i<=n; i++) {
    for (int j=0; j<=n; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  // Print da matriz
  /*for (int i=0; i<=n; i++) {
    for (int j=0; j<=n; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  } */

  // Verificação das camêras
  int validador[n][n];
  
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      int contador = matriz[i][j] + matriz[i][j+1] +
                   matriz[i+1][j] + matriz[i+1][j+1];
      validador[i][j] = (contador >= 2) ? 'S' : 'U';
    }
  }

  // Print do resultado em matriz
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          printf("%c", validador[i][j]);
      }
      printf("\n");
  }
  
  return 0;
}
