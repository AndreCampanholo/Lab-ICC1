# Lab-ICC1
Repositório com todas as atividades realizadas para a disciplina [SCC0222-Laboratório de Introdução à Ciência de Computação 1], criado com o intuito de auxiliar futuros alunos da disciplina caso tenham dúvidas nas atividades.

# Atividade 1 - HELLO, WORLD!
O objetivo desta atividade é ler um número inteiro (de 32 bits, tamanho padrão) do teclado e imprimir o texto "Hello, World! (numero)".<br>
Exemplo Entrada: 10<br>
Exemplo Saída: Hello, World! 10<br>
Não se esqueçam de quebrar a linha após mostrar o texto na tela!

# Atividade 2 - BOM DIA, ALGUÉM!
Implemente um programa em C que leia na entrada padrão de texto um nome de até 10 caracteres. Imprima na tela a mensagem "Bom dia, {nome}!", seguida por uma quebra de linha.

# Atividade 3 - MULTIPLICAÇÃO
Implemente um programa em C que leia na entrada padrão um número inteiro e imprima na tela o dobro desse número.

# Atividade 4 - BINÁRIO PARA DECIMAL
Implemente um programa em C que leia na entrada padrão de texto um inteiro contendo a representação binária de um número inteiro de até 4 bits. Imprima na tela a conversão do código lido para o número decimal correspondente.<br><br>
Exemplos de Entrada e Saída:<br>
Entrada: 0010 - Saída: 2<br>
Entrada: 1111 - Saída: 15

# Atividade 5 - MAIOR DE TRÊS
Implemente um programa em C que leia na entrada padrão de texto três números inteiros a, b e
c, um em cada linha. Em seguida, imprima na tela o valor correspondente ao maior desses números.<br><br>
Exemplos de Entrada e Saída:<br>
Entrada: 4 5 3 - Saída: 5<br>
Entrada: 1 -10 20 - Saída: 10

# Atividade 6 - MÉDIA COM DESCARTE
Implemente um programa em C que leia na entrada padrão de texto quatro números reais (a,b, c
e d). Em seguida, imprima na tela o valor da média aritmética destes 4 valores, descartando o menor valor. Esta média pode ser representada pela fórmula abaixo:<br>
[ M = \frac{a + b + c + d - \text{MIN}(a, b, c, d)}{3} ]<br>
Escreva o valor desta operação com 4 casas decimais.<br><br>
Exemplos de Entrada e Saída:<br>
Entrada: 2.0 2.0 3.0 3.0 - Saída: 2.6667<br>
Entrada: 5.3 5.6 5.4 5.5 - Saída: 5.5000

# Atividade 7 - RAIZ DE UMA EQUAÇÃO DO SEGUNDO GRAU
Implemente um programa em C que leia na entrada padrão de texto três números inteiros a, b e
c, separados por um espaço em branco. Em seguida, imprima na tela o(s) valor(es) correspondente(s) à raiz real da equação do segundo grau formada por esses números:<br>
[ ax^2 + bx + c = 0 ]<br>
Sua resposta deverá estar formatada para 3 casas decimais. Se não houver raiz real, imprima
a mensagem “NAO EXISTE RAIZ REAL”. Se houver duas raízes, imprima ambas na mesma linha,
separadas por um espaço, em ordem crescente.<br><br>
Exemplos de Entrada e Saída:<br>
Entrada: 1 -4 5 - Saída: NAO EXISTE RAIZ REAL<br>
Entrada: 4 -4 1 - Saida: 0.500<br>
Entrada: 1 -5 6 - Saída: 2.000 3.000

# Atividade 8 - CALCULADORA USANDO SWITCH
Implemente um programa em C que leia na entrada padrão de texto uma expressão aritmética e
retorne o resultado do cálculo. A expressão deverá estar de acordo com a seguinte máscara:<br>
[operando] [+-*/] [operando]<br><br>
Instruções Complementares:<br>
- Você deverá utilizar o comando switch da linguagem C.
- A entrada e saída devem ser números reais. Na saída, formate o número para 2 casas decimais apenas.<br><br>
Exemplos de Entrada e Saída:<br>
Entrada: 2 + 3 - Saída: 5.00<br>
Entrada: 4.3 / 2.5 - Saída: 1.72





