#include <stdio.h>

int main() {
    char nome[50]; //cria uma string 'nome': vetor de 50 caracteres, 49 deles válidos e o terminador nulo \0 (indica o fim do vetor) para receber o nome da pessoa
    scanf("%49[^\n]", nome); //lê na entrada um nome de no máximo 49 caracteres e o atribui à string 'nome'

    printf("Bom dia, %s!\n", nome); //imprime o nome informado ao final do texto

    return 0; //indica sucesso e finaliza a execução do código
}
