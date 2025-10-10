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

int insere_lista_fim(Lista* lista, int x){
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


int main(void) {
  Lista *lst;
  lst = cria_lista();
  insere_lista_fim(lst, 1);
  insere_lista_fim(lst, 2);
  insere_lista_fim(lst, 3);
  insere_lista_fim(lst, 4);
  insere_lista_fim(lst, 5);
  imprimirLista(lst);
  busarLista(lst,3);
  busarLista(lst,9);
  


  return 0;
}
