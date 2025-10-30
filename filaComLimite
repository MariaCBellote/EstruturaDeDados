#include <stdio.h>
#include<stdlib.h>


//codigo pra liberar lista de tras pra frente.

typedef struct cel{
  int conteudo;
  struct cel *seg;
}cel;

typedef struct fila{
    int quantidade;
    int maximo;
    struct cel *inicio;
    struct cel *fim;
}Fila;


Fila* cria_fila(){
    Fila* fi= (Fila*)malloc(sizeof(Fila));
    if(fi!=NULL){
       fi->quantidade = 0;
       fi->maximo=6;
       fi->inicio=NULL;
       fi->fim=NULL;
    }
}

int enqueue(Fila* fi, int x){
  if(fi==NULL || fi->quantidade >= fi->maximo) return -1;

  cel* aux = (cel*) malloc(sizeof(cel));
  if(aux == NULL) return -1;

  aux->conteudo = x;
  aux->seg = NULL;

  if(fi->quantidade == 0){
      fi->inicio = aux;
      fi->fim = aux;
  } else {
      fi->fim->seg = aux;
      fi->fim = aux;
  }

  fi->quantidade++;
  return 1;
}


int dequeue (Fila* fi){
 if(fi==NULL || fi->quantidade<=0) {return 0;}
 
fi->inicio = fi->inicio->seg;
 fi->quantidade--;
 

}

void imprimirFila(Fila* fi){
    cel* temp;
    temp= fi->inicio;
   while(fi->inicio->seg!=NULL){
       printf("%d\n",temp->conteudo );
      temp=temp->seg;
   }
}





int main(void) {
  Fila *lst;
  Fila *l=NULL;
  lst = cria_fila();
 enqueue(lst, 1);
 enqueue(lst, 2);
 enqueue(lst, 3);
 enqueue(lst, 4);
 enqueue(lst, 5);
 imprimirFila(lst);
  printf("\n");
  dequeue (lst);
imprimirFila(lst);
 printf("\n");

// isEmpty(lst);
 //isEmpty(l);
 
  return 0;
}
