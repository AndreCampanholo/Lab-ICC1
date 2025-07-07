# Lab-ICC1
Repositório com todas as atividades realizadas para a disciplina [SCC0222-Laboratório de Introdução à Ciência de Computação 1], criado com o intuito de auxiliar futuros alunos da disciplina caso tenham dúvidas nas atividades.

# Atividade 1 - HELLO, WORLD!
**Descrição:**<br>
O objetivo desta atividade é ler um número inteiro (de 32 bits, tamanho padrão) do teclado e imprimir o texto "Hello, World! (numero)".<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 10 - Saída: Hello, World! 10<br>
Não se esqueçam de quebrar a linha após mostrar o texto na tela!

# Atividade 2 - BOM DIA, ALGUÉM!
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão de texto um nome de até 10 caracteres. Imprima na tela a mensagem "Bom dia, {nome}!", seguida por uma quebra de linha.

# Atividade 3 - MULTIPLICAÇÃO
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão um número inteiro e imprima na tela o dobro desse número.

# Atividade 4 - BINÁRIO PARA DECIMAL
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão de texto um inteiro contendo a representação binária de um número inteiro de até 4 bits. Imprima na tela a conversão do código lido para o número decimal correspondente.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 0010 - Saída: 2<br>
Entrada: 1111 - Saída: 15

# Atividade 5 - MAIOR DE TRÊS
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão de texto três números inteiros a, b e
c, um em cada linha. Em seguida, imprima na tela o valor correspondente ao maior desses números.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 4 5 3 - Saída: 5<br>
Entrada: 1 -10 20 - Saída: 10

# Atividade 6 - MÉDIA COM DESCARTE
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão de texto quatro números reais (a,b, c
e d). Em seguida, imprima na tela o valor da média aritmética destes 4 valores, descartando o menor valor. Esta média pode ser representada pela fórmula abaixo:
```math
M = \frac{a + b + c + d - \text{MIN}(a, b, c, d)}{3}
```

<br>**Instruções Complementares:**<br>
Escreva o valor desta operação com 4 casas decimais.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 2.0 2.0 3.0 3.0 - Saída: 2.6667<br>
Entrada: 5.3 5.6 5.4 5.5 - Saída: 5.5000

# Atividade 7 - RAIZ DE UMA EQUAÇÃO DO SEGUNDO GRAU
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão de texto três números inteiros a, b e
c, separados por um espaço em branco. Em seguida, imprima na tela o(s) valor(es) correspondente(s) à raiz real da equação do segundo grau formada por esses números:
```math
ax^2 + bx + c = 0
```

<br>**Instruções Complementares:**<br>
Sua resposta deverá estar formatada para 3 casas decimais. Se não houver raiz real, imprima
a mensagem “NAO EXISTE RAIZ REAL”. Se houver duas raízes, imprima ambas na mesma linha,
separadas por um espaço, em ordem crescente.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 1 -4 5 - Saída: NAO EXISTE RAIZ REAL<br>
Entrada: 4 -4 1 - Saida: 0.500<br>
Entrada: 1 -5 6 - Saída: 2.000 3.000

# Atividade 8 - CALCULADORA USANDO SWITCH
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão de texto uma expressão aritmética e
retorne o resultado do cálculo. A expressão deverá estar de acordo com a seguinte máscara:<br>
[operando] [+-*/] [operando]<br>

**Instruções Complementares:**
- Você deverá utilizar o comando switch da linguagem C.
- A entrada e saída devem ser números reais. Na saída, formate o número para 2 casas decimais apenas.

**Exemplos de Entrada e Saída:**<br>
Entrada: 2 + 3 - Saída: 5.00<br>
Entrada: 4.3 / 2.5 - Saída: 1.72

# Atividade 9 - ME PERDI, GENTE!
**Descrição:**<br>
O Alanzoka se perdeu jogando Labyrinthine, e você precisa ajudar o Cap a encontrá-lo! Felizmente, há apenas um caminho longo, como uma reta numérica. O Cap está na posição a e o Alanzoka, em b (desconhecido). Se soubesse onde ele está, o Cap andaria |a − b|, mas está escuro e ele não enxerga. Como você é estudante da USP, explica ao Cap que a melhor estratégia é um revezar entre checar o espaço à sua esquerda e à sua direita, buscando cada vez mais longe cada vez, ou seja, mover para a+1, depois a-2, a+4, dobrando a distância a cada passo. Isso garante que, no pior caso, ele andará até 9 vezes a distância real |a − b| — o menor limite possível para qualquer estratégia!<br>
O Cap quer testar essa estratégia! Dados a (posição inicial do Cap) e b (posição do Alanzoka, desconhecida pelo Cap), calcule a distância total que o Cap vai percorrer com esta estratégia até encontrar o Alan.

**Instruções Complementares:**<br>
- Se necessário, pode-se usar a função abs() da stdlib.h e a pow() da math.h.
- OBS: Considere que o Cap checa primeiro a direita, logo movimento inicial é a+1.
- OBS: As posições podem ser negativas na reta.

**Exemplos de Entrada e Saída:**<br>
Entrada: 3 6 - Saída: 9

# Atividade 10 - QUANTOS ZEROS?
**Descrição:**<br>
Letícia adora brincar com números, seu irmão Francisco está aprendendo fatorial. Sabendo disso, Letícia com sua mente extremamente criativa resolveu lançar um desafio para seu irmão. "Dado um número N, quantos zeros N! possui a direita?". Francisco olhou e falou "haha, essa é fácil!" e então começou a calcular, para 1!, 2!, 3! e por aí foi. Quando chegou em 20! ele já não aguentava mais calcular e percebeu que não era capaz de realizar a tarefa para qualquer número. Sabendo de suas habilidades com programação ele pediu sua ajuda para mostrar à irmã que conseguiu resolver o desafio e finalmente receber o prêmio.<br>

**Instruções Complementares:**<br>
- Se necessário, pode-se usar a função abs() da stdlib.h e a pow() da math.h.
- Para melhor compreensão: Caso N = 10, teríamos 10! = 3628800, assim a resposta correta seria 2.
- Como entrada será dado um valor inteiro N (1 ≤ N ≤ 10<sup>9</sup>).

**Exemplos de Entrada e Saída:**<br>
Entrada: 20 - Saída: 4<br>
Entrada: 12 - Saída: 2

# Atividade 11 - **(MAPA DO MAPA DO TESOURO)
**Descrição:**<br>
Imagine que você tem um tesouro (um número) escondido em algum lugar da memória. Para encontrá-lo, você precisa de um mapa — um ponteiro que aponta diretamente para onde o tesouro está enterrado. Mas às vezes, você pode até ter um mapa do mapa — um ponteiro para ponteiro — que te leva até o mapa original. Implemente um programa em C que siga este roteiro de aventura:<br>
1. Peçaa ao usuário para informar o valor do tesouro (um número inteiro).<br>
2. Crie um mapa (*p) que aponte para o local onde o tesouro foi enterrado (ou seja, o endereço da variável).<br>
3. Use esse mapa para encontrar o tesouro e adicionar 10 moedas de ouro (adicione 10 ao valor da variável usando apenas o ponteiro, sem utilizar variável += 10).<br>
4. Agora, desenhe um mapa do mapa (**pp), ou seja, um ponteiro para ponteiro que leva até o ponteiro *p.<br>
5. Use o mapa do mapa para encontrar o mapa original, e com isso, adicionar mais 10 moedas ao tesouro.<br>
Ao final, o programa deve imprimir:
- O valor inicial do tesouro (antes de qualquer adição),
- O valor do tesouro acessado pelo mapa antes e depois da primeira adição de 10,
- O valor do tesouro acessado pelo mapa do mapa antes e depois da segunda adição de 10,
- E, por fim, o valor final do tesouro, seguido de uma quebra de linha (\n).

**Instruções Complementares:**<br>
O exercício visa o uso de ponteiros, NÃO utilize variáveis normais.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 10 - Saída: <br>
Valor inicial do tesouro : 10<br>
Valor do tesouro usando mapa : 10<br>
Valor do tesouro usando mapa depois de adicionarmos 10 moedas : 20<br>
Valor do tesouro usando mapa para o mapa : 20<br>
Valor do tesouro usando mapa para o mapa depois de adicionarmos 10 moedas : 30






