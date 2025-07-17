#include <stdio.h>

int main() {
    int a, b, c, maior; //cria variáveis inteiras para 3 números de entrada e para o maior entre eles
    scanf("%d", &a);
    scanf("%d", &b); //leitura das 3 variáveis de entrada
    scanf("%d", &c);

    if(a >= b && a >= c) {
        maior = a;
    } else if(b >= a && b >= c) {
        maior = b;                 //laço que determina qual dos 3 números é o maior entre eles e atribui esse valor à variável 'maior'
    } else  if(c >= a && c >= b) {
        maior = c;
    }

    printf("%d\n", maior); //imprime o maior entre os 3 números inteiros

    return 0;
}
