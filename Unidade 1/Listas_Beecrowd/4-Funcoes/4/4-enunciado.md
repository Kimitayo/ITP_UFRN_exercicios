# beecrowd | 4294
Conversor de Bases
Por EDUARDO NOGUEIRA CUNHA,  Brazil

Timelimit: 1
Juca, o novo estagiário, desenvolveu uma parte do sistema responsável pelas conversões de números na base decimal para uma base qualquer entre [2,8]. O programa consiste em receber uma quantidade indeterminada de pares de valores V e B exibindo a conversão adequada do número decimal V (não negativo) para a base B até que a entrada -1 seja fornecida.

Porém, o código de Juca deve ser revisado e o seu objetivo é identificar os trechos de código que podem ser substituídos por uma função, já que Juca não entendeu bem esse conceito. Assim, no código abaixo, identifique quais trechos podem ser substituídos por uma função e a implemente. Além disso, modifique o código para atender ao objetivo descrito.

Lembre que Juca está aprendendo a programar então o código pode ter alguns erros que devem ser corrigidos ou até mesmo removidos.

Observe o formato de entrada e saída esperados nos casos de teste.





#include <stdio.h>
int main(){
  
  int value, base, result;
  do {
    scanf("%d", &value);
    scanf("%d", &base);
    switch(base){
     case 2: {
        result = 0;
        int temp = value;
        while(temp > 0){
            result = (result * 10) + (temp % 2);
            temp = temp / 2;
        }
     }
     case 3: {
        int result = 0;
        int temp = value;
        while(temp > 0){
            result = (result * 10) + (temp % 3);
            temp = temp / 2;
        }
     }
     case 4: {
        int result = 0;
        int temp = value;
        while(temp > 0){
            temp = temp / 2;
            result = (result * 10) + (temp % 4);
        }
     }
     case 5: {
        int result = 0;
        int temp = value;
        while(temp > 0){
            temp = temp / 2;
            result = result + (temp % 4) * 10;
        }
     }
     case 6: {
        int result = 0;
        int temp = value;
        int mul = 1;
        while(temp > 0){
        result = result + (temp % 6) * mul;
        mul = mul * 10;
        temp = temp / 6;
        }
     }
     case 7: {
        int result = 0;
        int temp = value;
        int mul = 1;
        while(temp > 0){
        result = result + (temp % 7) * mul;
        mul = mul * 10;
        temp = temp / 7;
        }
     }
     case 8: {
        int result = 0;
        int temp = value;
        int mul = 1;
        while(temp > 0){
        result = result + (temp % 8) * mul;
        mul = mul * 10;
        temp = temp / 8;
        }
     }
    }
    printf("Number %d na base %d = %d\n", value, base, result);
  } while(value != -1);
  
  
  return 0;
}




Mais informações sobre o problema podem ser encontradas nos endereços:

Conversor on-line entre bases.

Representação numérica posicional.

​A solução deve apresentar ao menos uma função e não deve ter variáveis globais.


## Entrada
0 2

1 2

2 2

-1

## Saída
Numero 0(10) na base 2 = 0(2)

Numero 1(10) na base 2 = 1(2)

Numero 2(10) na base 2 = 10(2)

Programa Encerrado!



### Samples Input	
0 2
1 2
2 2
-1
### Samples Output
Numero 0(10) na base 2 = 0(2)
Numero 1(10) na base 2 = 1(2)
Numero 2(10) na base 2 = 10(2)
Programa Encerrado!
