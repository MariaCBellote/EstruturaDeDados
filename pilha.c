#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
    int conteudo;
    struct cel *seg;
} cel;

typedef cel* Lista;

// Cria uma pilha (lista vazia)
Lista* cria_pilha() {
    Lista* l = (Lista*)malloc(sizeof(Lista));
    if (l != NULL)
        *l = NULL;
    return l;
}

// Verifica se a pilha está vazia
int isEmpty(Lista* l) {
    if (l == NULL || *l == NULL) {
        printf("Lista vazia.\n");
        return 1;
    }
    return 0;
}

// Empilha (push)
int push(Lista* l, int x) {
    if (l == NULL) return 0;

    cel* novo = (cel*)malloc(sizeof(cel));
    if (novo == NULL) return 0;

    novo->conteudo = x;
    novo->seg = *l;   // novo aponta para o topo atual
    *l = novo;        // novo se torna o topo
    return 1;
}

// Desempilha (pop)
int pop(Lista* l) {
    if (isEmpty(l)) return 0;

    cel* aux = *l;
    *l = aux->seg;    // topo passa a ser o próximo elemento
    free(aux);
    return 1;
}

// Mostra o topo da pilha
void mostrarTopo(Lista* l) {
    if (isEmpty(l)) return;
    printf("Topo: %d\n", (*l)->conteudo);
}

// Imprime toda a pilha
void imprimirLista(Lista* l) {
    if (isEmpty(l)) return;

    cel* aux = *l;
    printf("Pilha: ");
    while (aux != NULL) {
        printf("%d ", aux->conteudo);
        aux = aux->seg;
    }
    printf("\n");
}

int main() {
    Lista* pilha = cria_pilha();

    push(pilha, 10);
    push(pilha, 20);
    push(pilha, 30);

    imprimirLista(pilha);
    mostrarTopo(pilha);

    pop(pilha);
    imprimirLista(pilha);
    mostrarTopo(pilha);

    isEmpty(pilha);

    return 0;
}
