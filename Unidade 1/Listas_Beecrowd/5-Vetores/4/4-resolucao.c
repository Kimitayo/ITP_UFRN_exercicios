#include <stdio.h>

int main(void) {
  int vetor_N[1000];
  int n; 
  int i = 0;

  scanf("%d", &n); // n = 3

  while (i < 1000) { // i=999 i=1000
    for (int j=0; j<n; j++) { // j=0 j=1
      if (i<1000) {
        printf("N[%d] = %d\n", i, j); // N[999]=0 N[1000]=1
        i++;
      } else {
        break;
      }
      
    
    }
  }  

  return 0;
}
