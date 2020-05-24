# C-Exercises
Beginner exercises to learn C

## Pilha
Considera o tipo abstrato Pilha de números inteiros do exercício anterior (exercício 2) e escreva uma função que informa a quantidade de negativos em uma pilha.
Use o protótipo: int contanegativos(pilha *p) Obs.: Após na execução da função, a pilha deverá conter os mesmos elementos e ordem que havia antes da execução da função.

## Fila
Considere a existência de um tipo abstrato Fila de números inteiros, cuja interface está definida no arquivo fila.h da seguinte forma:

  typedef struct f fila;

  fila* cria(void);

  void insere (fila* f, int dado);

  int remove (fila* f);

  int vazia (fila* f);

  void libera (fila* f);

Sem conhecer a representação interna desse tipo abstrato Fila e usando apenas as funções declaradas,, faça uma função que receba como parâmetro uma fila e remova da fila os números negativos. Utilize o protótipo:
void remove_negativos (fila* f);

## Exer_1
Implemente uma fun��o que calcule a �rea da superf�cie e o volume de uma esfera de raio R. Essa fun��o deve obedecer ao prot�tipo: void calc_esfera(float R, float *area, float *volume) A �rea da superf�cie e o volume s�o dados, respectivamente, por: A = 4 ? ? ? R2 V = 4/3 ? ? ? R3

## Exer_2
2)	Escreva uma fun��o que aceita como par�metro um vetor de inteiros com N valores, determina o menor elemento do vetor e o n�mero de vezes que este elemento ocorreu no vetor. Por exemplo, para um vetor com os seguintes elementos: 5, 2, 15, 3, 7, 2, 8, 6, 2, a fun��o deve retorna para o programa que a chamou o valor 2 e o n�mero 3 (indicando que o n�mero 2 ocorreu 3 vezes). A fun��o deve obedecer ao prot�tipo: void menor(int vet[], int *menor, int *vezes)

