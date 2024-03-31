#include <stdio.h>

int main(void) {
  int contador1=0, contador2=0, contador3=0, contador4=0;
  int n;
  scanf("%d", &n);

  if (n>=1 && n<=1000){
    for (int i=0; i<n; i++){
      int l;
      scanf("%d", &l);

      if (l%2==0){
        contador1++;
      } if (l%3==0){
        contador2++;
      } if (l%4==0){
        contador3++;
      } if (l%5==0){
        contador4++;
      }
    }

    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", contador1, contador2, contador3, contador4);
    
  }

  
  return 0;
}
