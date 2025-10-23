
#include <stdio.h>
#include<stdlib.h>


//codigo pra liberar lista de tras pra frente.

typedef struct cel{
  int conteudo;
  struct cel *seg;
}cel;

typedef struct cel* Lista;


Lista* cria_lista(){
  Lista *li = (Lista*) malloc(sizeof(Lista));
  if(li != NULL){
    *li=NULL; 
  }
  return li;
}

int enqueue(Lista* lista, int x){
  if(lista==NULL) {return 0;}
  cel* aux = (cel*) malloc(sizeof(cel));
  if(aux==NULL){return 0;}
  aux->conteudo = x;
  aux->seg = NULL;
  if((*lista)==NULL){ *lista = aux;}
  else{
    cel *temp;
    temp = *lista;
    while(temp->seg!= NULL){ //caminha até o utlimo elemento
      temp= temp->seg;
    }
    temp->seg = aux;
  }
  return 1;
}


int dequeue (Lista* lista){
 if(lista==NULL) {return 0;}
 
 *lista = (*lista)->seg;
 

}

void imprimirLista(Lista* l){
    if(l==NULL){printf("Lista vazia...");}
    else{
        
        cel *temp;
        temp=*l;
        while(temp != NULL){
            printf("%p e %d\n",&temp->conteudo,temp->conteudo); //&temp->conteudo acessa o endereço de conteudo e &temp de temp (não mua só substitui valores)
            temp = temp->seg;
        }
    }
    
}
    
void busarLista(Lista* l, int x){
      if(l==NULL){printf("Lista vazia\n"); return;}  
      cel *temp;
      temp=*l;
      while(temp != NULL){
          if(temp->conteudo==x){
              printf("%d, endereço: %p\n",temp->conteudo,temp->seg);
             return;
          }
          temp=temp->seg;
      }
      printf("Não encontrado.\n");
     
    }

void mostrarTopo(Lista* lista ){
    printf("%p | %d\n", *lista, (*lista)->conteudo);
}

int isEmpty(Lista *l){
    if ( l==NULL || *l==NULL){
        printf("Lista vazia.\n");
        return 1;
      
    }
    return 0;
}

int main(void) {
  Lista *lst;
  Lista *l=NULL;
  lst = cria_lista();
 enqueue(lst, 1);
 enqueue(lst, 2);
 enqueue(lst, 3);
 enqueue(lst, 4);
 enqueue(lst, 5);
  imprimirLista(lst);
  printf("\n");
  dequeue (lst);
 imprimirLista(lst);
 printf("\n");
 mostrarTopo(lst);
 isEmpty(lst);
 isEmpty(l);
 
  return 0;
}
