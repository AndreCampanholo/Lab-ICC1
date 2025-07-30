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
Implemente um programa em C que leia na entrada padrão de texto um nome de até 10 caracteres. Imprima na tela a mensagem "Bom dia, {nome}!", seguida por uma quebra de linha.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: André - Saída: Bom dia, André!<br>
Entrada: Maria Clara - Saída: Bom dia, Maria Clara!

# Atividade 3 - MULTIPLICAÇÃO
**Descrição:**<br>
Implemente um programa em C que leia na entrada padrão um número inteiro e imprima na tela o dobro desse número.<br>

**Exemplos de Entrada e Saída**<br>
Entrada: 4 - Saída: 8

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

**Instruções Complementares:**<br>
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

# Atividade 12 - TROCANDO OS CANAIS
**Descrição:**<br>
Imagine que você tem duas televisões, cada uma sintonizada em um canal diferente. Em vez de levantar do sofá para trocar os canais manualmente, você tem dois controles remotos — um para cada TV. Esses controles não armazenam os canais em si, mas sabem exatamente onde está cada TV e permitem que você altere o canal de forma indireta.<br>
A função Swap é um conceito comum em programação e refere-se a uma operação que troca os valores de duas variáveis entre si. Tradicionalmente, isso é feito armazenando temporariamente o valor de uma das variáveis, copiando o valor da segunda para a primeira e, por fim, usando o valor temporário para atualizar a segunda.<br>
Neste exercício, você irá realizar essa troca utilizando ponteiros, ou seja, usando os controles remotos que apontam para as televisões (variáveis) e operam suas configurações (valores) à distância.<br>
1. Crie duas variáveis inteiras que representem os canais atuais de duas TVs, e peça ao usuário que digite seus valores.<br>
2. Declare dois ponteiros que apontem para essas variáveis, simulando os controles remotos.<br>
3. Implemente uma função void swap(int *a, int *b) que troque os canais (valores) das TVs usando apenas os controles remotos (ponteiros). Para isso, use uma variável temporária.<br>
4. Chame a função swap() passando os ponteiros como argumentos.<br>
5. Ao final, exiba os canais atuais de cada TV após a troca, confirmando que os controles funcionaram corretamente.<br>

**Instruções Complementares:**<br>
- ATENÇÂO: Imprima o resultado na mesma ordem que você leu: scanf(num1, num2); ... printf(num1, num2);
- Não esqueça de quebrar a linha.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: -50 100 - Saída: 100 -50<br>
Entrada: -75 150 - Saída: 150 -75

# Atividade 13 - OS CARTÕES DA BIBLIOTECA
**Descrição:**<br>
Barbara Gordon é uma bibliotecária que frequentemente falta do trabalho por demandas no seu segundo emprego; para não perder o emprego de bibliotecária e não chamar atenção para o segundo emprego ela precisa de sua ajuda para automatizar uma parte de seu trabalho. Ela cuida de três livros com códigos únicos (por exemplo: 101, 202, 303). Ela não segura os livros diretamente, mas usa cartões especiais que dizem onde cada livro está na estante. Cada cartão é como um ponteiro: ele aponta diretamente para a variável que guarda o conteúdo do livro. Durante o dia, pessoas retiram e devolvem livros. Quando isso acontece, Barbara atualiza seus cartões para refletir a nova organização da estante. As vezes ela também precisa trocar um cartão de um livro por outro, quando os livros mudam de lugar.<br>
Objetivo: Escreva um programa em C que simule o trabalho da bibliotecária, manipulando variáveis inteiras e ponteiros com base em ações informadas pelo usuário.<br>

**Instruções Complementares:**<br>
1. Solicite ao usuário os códigos de três livros. Armazene-os nas variáveis livro1, livro2 e livro3.<br>
2. Crie três ponteiros, apontando inicialmente para livro1, livro2 e livro3, respectivamente.<br>
3. Em seguida, peça ao usuário que informe uma ação para cada um dos três cartões usando números inteiros, em sequência. As ações possíveis são:
- -1: retirar, o livro referido pelo cartão foi retirado da estante, o cartão correspondente deve ser definido como NULL.
- 0: atualizar, o código do livro referido pelo cartão deve ser incrementado em 1.
- 1, 2 ou 3: o livro trocou de lugar outro livro. Os cartões devem trocar os endereços entre si.

4. Após processar as ações, imprima os códigos dos livros acessando-os através dos cartões. Se o ponteiro for NULL, imprima “Livro fora da estante”.<br>
5. Processe as ações em ordem, considerando acesso apenas pelos cartões.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 101 202 303<br>
-1<br>
3<br>
0<br>
Saída:<br> 
cartao1 -> Livro fora da estante<br>
cartao2 -> 303<br>
cartao3 -> 203<br>
Neste exemplo os eventos foram (1) Livro referido pelo cartão 1 foi retirado, (2) Livro referido pelo cartão 2 trocou de lugar com cartão 3, (3) livro referido pelo cartão 3 teve seu código atualizado.

# Atividade 14 - AQUI, NADA É TEMPORÁRIO!
**Descrição:**<br>
Gandalf decidiu brincar com o psicológico da raça Hobbit novamente. O cinzento disse que ninguém irá passar pela Ponte do Brandevin, salvo aqueles que alternarem de lugar discretamente, sem que o velho mago perceba. Para isso que isso seja possível, um Hobbit deve trocar de lugar com outro, do outro lado da ponte. Essa troca precisa ser muito discreta, ou seja, não poderá ser utilizado um espantalho no processo.<br>
Objetivo: Troque os valores apontados por dois ponteiros entre si de forma discreta, ou seja, sem utilizar uma variável temporária auxiliar. Para isso, você deverá utilizar apenas aritmética de ponteiros e operações básicas.<br>

**Instruções Complementares:**<br>
1. Aloque dois inteiros dinamicamente usando malloc.<br>
2. Leia dois números valores para esses inteiros.<br>
3. Troque os valores usando apenas ponteiros (i.e., sem variáveis temporárias!).<br>
4. Imprima os valores antes e depois da troca.<br>
5. Libere a memória alocada.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 115 -67<br>
Saída: 115 -67<br>
       -67 115

# Atividade 15 - FATORIAL, MAS NEM TANTO!
**Descrição:**<br>
Rochele estava entendiada e decidiu atormentar a sua irmã Lisa, que estava aprendendo a programar. Rochele lançou um desafio: duvido que, dado um número n, você consegue calcular o resultado da soma de 1! com as divisões de 1 pelos fatoriais seguintes, alternando entre valores positivos e negativos, começando por um positivo, 1/2! nesse caso. Lisa entendeu nada e pediu para Rochele deixar de ser prolixa e escrever a fórmula, a qual é descrita no objetivo abaixo.<br>
Objetivo: Escreva um programa em C que calcule o resultado da seguinte sequência para n termos:
```math
S = 1+1/2! - 1/3! + 1/4! - 1/5! + ... ± 1/n!
```

**Instruções Complementares:**<br>
1. Solicite ao usuário informe o valor de n (n > 0).<br>
2. Use apenas for/while, if/else e operações matemáticas.<br>
3. Calcule o fatorial (!) dentro do laço de repetição.<br>
4. Respeite a precedência de operadores para alternar entre + е -.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 78 - Saída: 1.367879

# Atividade 16 - A SEÇÃO DOS LIVROS MISTERIOSOS
**Descrição:**<br>
Letícia e João Pedro estão arrumando a biblioteca mágica da escola. Lá, existe uma regra muito estranha: livros só podem entrar na Seção dos Livros Misteriosos se seus títulos forem palíndromos — ou seja, se puderem ser lidos da mesma forma da esquerda para a direita e da direita para a esquerda!<br>
Porém, um livro foi encontrado com o título completamente bagunçado: as letras do título foram embaralhadas! Letícia e João Pedro precisam da sua ajuda para descobrir se é possível reorganizar essas letras formando um palíndromo válido.<br>
Sabendo de suas habilidades de programação eles pediram sua ajuda para determinar se o livro pertence à Seção dos Livros Misteriosos.

**Instruções Complementares:**<br>
- Na primeira linha será dado um inteiro N (1 ≤ N ≤ 10<sup>9</sup>) que representa a quantidade de caracteres do título do livro. Na próxima linha será dado o nome do livro de forma embaralhada.
- E garantido que os caracteres são todos minúsculos.

**Exemplos de Entrada e Saída:**<br>
Entrada: 4 anna - Saída: Sim<br>
Entrada: 4 anaa - Saída: Nao

# Atividade 17 - O MÊS DA PRÉ-VENDA
**Descrição:**<br>
Uma loja de jogos registrou no último mês de maio o número de pré-vendas reservadas para o console Nintendo Switch 2 em cada dia do mês. Implemente um programa em C que leia na entrada padrão de texto um número natural para cada dia do mês de maio. Em seguida, imprima na tela a quantidade vendida no melhor dia de vendas. Após isso, imprima o dia com maior número de reservas. Caso mais de um dia tenha registrado o melhor número de reservas, você deve imprimir todos os dias, um em cada linha, ordenados do menor para o maior.<br>
Note que o mês de maio tem 31 dias. A quantidade vendida será informada na ordem de dias, começaando no dia 1º ao dia 31.<br>

**Exemplos de Entrada e Saída:**<br>
Entrada: 5 10 15 20 15 10 5 2 3 4 5 6 7 8 9 12 13 14 15 16 17 30 21 23 12 6 3 8 7 4 2<br>
Saída: 30 22<br>
Entrada: 1 2 3 4 5 6 7 8 9 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 0 1 2 3<br>
Saída: 9 9 10 27












