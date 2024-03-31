#include <stdio.h>

int main(void) {
  int n;
  int votacao;
  int votos_favoraveis;

  while(scanf("%d", &n) != EOF) {
    votos_favoraveis=0;
    double calculo = (2.0*n)/3.0;

    while (n--) {
      scanf("%d", &votacao);
      if (votacao==1){
        votos_favoraveis++;
      }
    }

    
    if (votos_favoraveis>=calculo) {
      printf("impeachment\n");
    } else {
      printf("acusacao arquivada\n");
    }
    
  }
   

  return 0;
}
