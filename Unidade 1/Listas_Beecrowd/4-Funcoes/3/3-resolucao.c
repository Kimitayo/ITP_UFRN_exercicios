#include <stdio.h>


int verifica_perfeicao(int num) {
    int soma_divisores = 0;
    int i = 1; 
    

    while (i < num) {
        
        if (num % i == 0) {
            soma_divisores += i;
        }
        i++; 
    }
    
 
    if (soma_divisores == num) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;
    
   
    scanf("%d", &num);
    
   
    if (verifica_perfeicao(num)) {
        printf("Perfeito");
    } else {
        printf("Não perfeito");
    }
    
    return 0;
}
