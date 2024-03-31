#include <stdio.h>
#define MAXIMO 20

int main(void) {
  int vetor[MAXIMO];

  // Alocar os valores na lista
  for (int i = 0; i < MAXIMO; i++) {
    scanf("%d", &vetor[i]);
  }

  // Mudando a ordem dos valores 
  for (int i = 0; i < MAXIMO/2; i++) { // i=0 i=1 i=2 i=3 i=4
    int temp = vetor[i]; // temp=1 temp=2 temp=3 temp=4 temp=5
    vetor[i] = vetor[MAXIMO-1-i]; // vetor[0]=6
    vetor[MAXIMO-1-i] = temp; // vetor[5]=1 vetor[4]=2 vetor[3]=3 vetor[2]=4 vetor[1]=5
    
  }
    
  for (int i = 0; i < MAXIMO; i++) {
    printf("N[%d] = %d\n", i, vetor[i]);
  }
  
    //printf("N[%d] = %d\n", i, vetor_N[i]);

  
  return 0;
}
