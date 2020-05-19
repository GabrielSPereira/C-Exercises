#include <stdio.h>
#include <stdlib.h>

typedef struct n {
	float info;
	struct n *prox;
}no;

typedef struct p{
	no *topo;
}pilha;

pilha* cria (){
	pilha *p = (pilha*) malloc(sizeof(pilha));
	p->topo = NULL;
	return p;
}

int vazia (pilha *p){
	return (p->topo==NULL);
}

void push (pilha* p, float dado){
	no *novo = (no*) malloc(sizeof(no));
	novo->info = dado;
	novo->prox = p->topo;
	p->topo = novo;
}

float pop (pilha* p){
	if (vazia(p)) {
		printf("Pilha vazia.\n");
		exit(1); /* aborta programa */
	}
	float temp = p->topo->info;
	no *aux = p->topo;
	p->topo=aux->prox;
	free(aux);
	return temp;
}

void imprime (pilha* p){
	no *aux;
	for (aux=p->topo; aux!=NULL; aux=aux->prox)
		printf("%f\n",aux->info);
}

void libera (pilha* p){
	no *aux = p->topo;
	while (aux!=NULL) {
		no *temp = aux->prox;
		free(aux);
		aux = temp;
	}
	free(p);
}

int contanegativos(pilha *p){
	int temp, i=0;
	while(!vazia(p)){
		temp=pop(p);
		if(temp<0){
			i++;
		}
	}
	return i;	
}

void main(){
	int numNeg;
	pilha *p1 = cria();
	push(p1,10);
	push(p1,8);
	push(p1,-1);
	push(p1,-10);
	printf("Pilha p1\n");
	imprime(p1);
	printf("Quantidade de números negativos \n");
	numNeg = contanegativos(p1);
	printf("%i", numNeg);
	libera(p1);	
}