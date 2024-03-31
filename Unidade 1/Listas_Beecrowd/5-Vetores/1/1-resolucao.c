#include <stdio.h>

int main(void) {
  int vetor_x[10];
  int n=10;

  for (int i=0; i<n; i++) {
    scanf("%d", &vetor_x[i]);
    if (vetor_x[i] <= 0) {
      vetor_x[i] = 1;
      printf("X[%d] = 1\n", i);
    } else {
      printf("X[%d] = %d\n", i, vetor_x[i]);
    }
  }
  
  return 0;
}
