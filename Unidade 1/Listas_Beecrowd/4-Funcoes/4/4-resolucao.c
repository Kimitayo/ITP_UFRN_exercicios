#include <stdio.h>

int conversaoBase(int valor, int base) {
    int resultado = 0;
    int temp = valor;
    int mul = 1;
    while (temp > 0) { 
        resultado += (temp % base) * mul; 
        mul *= 10; 
        temp /= base; 
    }
    return resultado;
}

int main() {
    int valor, base, resultado;

    do {
        scanf("%d", &valor);
        if (valor == -1) {
          printf("Programa Encerrado!");
          break;
        }
      
        scanf("%d", &base);

        switch (base) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6: //Numero 0(10) na base 2 = 0(2)
            case 7:
            case 8:
                resultado = conversaoBase(valor, base);
                printf("Numero %d(10) na base %d = %d(%d)\n", valor, base, resultado, base);
                break;
        }
    } while (valor != -1);

    return 0;
}
