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