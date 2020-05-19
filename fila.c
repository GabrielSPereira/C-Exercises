#include <stdio.h>
#include <stdlib.h>

typedef struct n {
	float info;
	struct n *prox;
}no;

typedef struct f {
	no* inicio;
	no* fim;
}fila;

fila* cria (){
	fila* f = (fila*) malloc(sizeof(fila));
	f->inicio = NULL;
	f->fim = NULL;
	return f;
}

int vazia (fila* f){
	return (f->inicio==NULL);
}

void insere(fila* f, float dado){
	no* novo = (no*) malloc(sizeof(no));
	novo->info = dado;
	novo->prox = NULL;
	if (f->fim != NULL) /* verifica se lista n?o estava vazia */
		f->fim->prox = novo;
	f->fim = novo;
	if (f->inicio==NULL) /* fila antes vazia? */
		f->inicio = f->fim;
}

float remover(fila* f){
	float temp;
	if (vazia(f)) {
		printf("Fila vazia.\n");
		exit(1); /* aborta programa */
	}
	temp = f->inicio->info;
	no* aux = f->inicio->prox;
	free(f->inicio);
	f->inicio=aux;
	if (f->inicio == NULL) /* fila ficou vazia? */
		f->fim = NULL;
	return temp;
}

void imprime (fila *f){
	no* aux;
	for (aux=f->inicio; aux!=NULL; aux=aux->prox)
		printf("%f\n",aux->info);
}

void libera(fila *f){
	no* aux = f->inicio;
	while (aux!=NULL) {
		no* temp = aux->prox;
		free(aux);
		aux = temp;
	}
	free(f);
}

void remove_negativos (fila *f){
	int temp;
	fila *f_aux=cria();
	while(!vazia(f)){
		temp=remover(f);
		if(temp>0){
			insere(f_aux,temp);
		}
	}
	while(!vazia(f_aux)){
		temp=remover(f_aux);
		insere(f,temp);
	}
}

void main(){
	fila *f=cria();
	insere(f,21);
	insere(f,72);
	insere(f,45);
	insere(f,-31);
	insere(f,10);
	insere(f,-98);
	printf("Fila F\n");
	imprime(f);
	remove_negativos (f);
	printf("Fila sem negativos\n");
	imprime(f);	
	libera(f);	

}