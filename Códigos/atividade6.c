#include <stdio.h>

int main() {
    float a, b, c, d, menor, media; //cria variáveis reais para 4 termos de entrada, o menor entre eles, e a média com descarte deles
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c); //leitura dos números reais de entrada
    scanf("%f", &d);

    if(a <= b && a <= c && a <= d){
        menor = a;
    } else if(b <= a && b <= c && b <= d){
        menor = b;
    } else if(c <= a && c <= b && c <= d){ //laço que determina quais dos 4 números reais é o menor entre eles
        menor = c;
    } else if(d <= a && d <= b && d <= c){
        menor = d;
    }

    media = (a + b + c + d - menor) / 3; //cálculo da média aritmética com descarte do menor termo

    printf("%.4f\n", media); //imprime a média com 4 casas decimais

    return 0;
}
