#include <stdio.h>
#include <math.h>

int main(void) {
  int vetor_N[10];
  int n = 10;
  int i = 0;

  scanf("%d", &vetor_N[i]); // 2
  
  for (int i = 0; i < n; i++) { 
    if (i == 0) {
      printf("N[%d] = %d\n", i, vetor_N[i]);
    } else {
      vetor_N[i] = vetor_N[0] * pow(2, i);
      printf("N[%d] = %d\n", i, vetor_N[i]);
    }
  }
  
  return 0;
}
