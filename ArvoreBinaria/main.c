/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int info;
    struct NO *esq;
    struct NO *dir;
    
}NO;

typedef struct NO *ArvBin;

ArvBin* cria_arvBin(){
    ArvBin *raiz= (ArvBin*)malloc(sizeof(ArvBin));
    if(raiz!=NULL){
        *raiz=NULL;
    }
    return raiz;
}

void preOrdem(ArvBin *raiz){
    if(raiz==NULL){
        return;
    }
    if(*raiz!=NULL){
        printf("%d |",(*raiz)->info);
        preOrdem(&((*raiz)->esq));
        preOrdem(&((*raiz)->dir));
    }
}

void emOrdem(ArvBin *raiz){
       if(raiz==NULL){
        return;
    }
     if(*raiz!=NULL){
       emOrdem(&((*raiz)->esq));
        printf("%d |",(*raiz)->info);
       emOrdem(&((*raiz)->dir));
    }
}

void posOrdem(ArvBin *raiz){
     if(raiz==NULL){
        return;
    }
     if(*raiz!=NULL){
       posOrdem(&((*raiz)->esq));
        posOrdem(&((*raiz)->dir));
        printf("%d |",(*raiz)->info);
    }
}


int contarElementosArvore(ArvBin *raiz){
     if(raiz==NULL){
        return 0;
    }
     if(*raiz==NULL){
        return 0;
    }
    
    int tesq= contarElementosArvore(&((*raiz)->esq));
    int tdir=contarElementosArvore(&((*raiz)->dir));
    return tesq+tdir+1;
      
    
}

int alturaArvore(ArvBin *raiz){
     if(raiz==NULL){
        return -1;
    }
     if(*raiz==NULL){
        return -1;
    }
    
    int aesq= alturaArvore(&((*raiz)->esq));
    int adir=alturaArvore(&((*raiz)->dir));
    
    if(aesq>adir){
        return aesq+1;
    }
    else{
        return adir+1;
    }

      
    
}

int main()
{
    printf("Inicio\n");
	ArvBin *raiz = cria_arvBin();


	NO a,b, c, d, e, f, g, h, i;
	NO *converte = &a;

	a.info = 15;
	a.esq = &b;
	a.dir = &c;
	b.info = 20;
	b.esq = &d;
	b.dir = &e;
	c.info = 7;
	c.esq = &f;
	c.dir = &g;
	d.info = 2;
	d.esq = NULL;
	d.dir = NULL;
	e.info = 32;
	e.esq = &h;
	e.dir = NULL;
	h.info = 5;
	h.esq = NULL;
	h.dir = NULL;
	f.info = 3;
	f.esq = NULL;
	f.dir = NULL;
	g.info = 10;
	g.esq = &i;
	g.dir = NULL;
	i.info = 1;
	i.esq = NULL;
	i.dir = NULL;
	*raiz=&a;
	
printf("pre Ordem\n");
preOrdem(raiz);
printf("\n");

printf("pos Ordem\n");
posOrdem(raiz);
printf("\n");

printf("em Ordem\n");
emOrdem(raiz); 
printf("\n");

printf("Quantidade de elemntos: \n");
printf("%d \n", contarElementosArvore(raiz)); 

printf("Altura: \n");
printf("%d \n", alturaArvore(raiz)); 
    
    return 0;
}