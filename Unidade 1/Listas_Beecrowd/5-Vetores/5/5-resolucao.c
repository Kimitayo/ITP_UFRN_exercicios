#include <stdio.h>


int main(void) {
  int n;
  scanf("%d", &n);
  int vetor[n];
  int temp;
  int j;
  
  for (int i = 0; i < n; i++) { // i=0 i=1 i=4
    scanf("%d", &vetor[i]); // vetor[0]=1 vetor[1]=2 vetor[2]=4

    if (i==0) { 
      temp = vetor[i]; //temp=1 
      vetor[n] = vetor[i]; 
      j=i;
    } else if (vetor[i]<=temp) {
      temp = vetor[i]; //
      j=i;
      vetor[n] = vetor[i]; //vetor[n]=3
    }
  }
  
  printf("Menor valor: %d\nPosicao: %d\n", vetor[n], j);
  
  return 0;
}
