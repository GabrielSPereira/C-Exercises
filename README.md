# C-Exercises
Beginner exercises to learn C

## Pilha
Considera o tipo abstrato Pilha de n√∫meros inteiros do exerc√≠cio anterior (exerc√≠cio 2) e escreva uma fun√ß√£o que informa a quantidade de negativos em uma pilha.
Use o prot√≥tipo: int contanegativos(pilha *p) Obs.: Ap√≥s na execu√ß√£o da fun√ß√£o, a pilha dever√° conter os mesmos elementos e ordem que havia antes da execu√ß√£o da fun√ß√£o.

## Fila
Considere a exist√™ncia de um tipo abstrato Fila de n√∫meros inteiros, cuja interface est√° definida no arquivo fila.h da seguinte forma:

  typedef struct f fila;

  fila* cria(void);

  void insere (fila* f, int dado);

  int remove (fila* f);

  int vazia (fila* f);

  void libera (fila* f);

Sem conhecer a representa√ß√£o interna desse tipo abstrato Fila e usando apenas as fun√ß√µes declaradas,, fa√ßa uma fun√ß√£o que receba como par√¢metro uma fila e remova da fila os n√∫meros negativos. Utilize o prot√≥tipo:
void remove_negativos (fila* f);

## Exer_1
Implemente uma funÁ„o que calcule a ·rea da superfÌcie e o volume de uma esfera de raio R. Essa funÁ„o deve obedecer ao protÛtipo: void calc_esfera(float R, float *area, float *volume) A ·rea da superfÌcie e o volume s„o dados, respectivamente, por: A = 4 ? ? ? R2 V = 4/3 ? ? ? R3

## Exer_2
2)	Escreva uma funÁ„o que aceita como par‚metro um vetor de inteiros com N valores, determina o menor elemento do vetor e o n˙mero de vezes que este elemento ocorreu no vetor. Por exemplo, para um vetor com os seguintes elementos: 5, 2, 15, 3, 7, 2, 8, 6, 2, a funÁ„o deve retorna para o programa que a chamou o valor 2 e o n˙mero 3 (indicando que o n˙mero 2 ocorreu 3 vezes). A funÁ„o deve obedecer ao protÛtipo: void menor(int vet[], int *menor, int *vezes)

