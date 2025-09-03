/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void BubbleSort(int *v,int tamanho){
    int aux;
    for(int i=0;i<tamanho;i++){
        int troca = 0;
        for(int n=0;n<tamanho-1-i;n++){
            if(v[n]>v[n+1]){
                aux=v[n];
                v[n]=v[n+1];
                v[n+1]=aux;
                troca = 1;
            }
        }
        
        if (troca == 0){
            break;
        }
        
    }
}

/*
void bubblesort(int *v, int n){
    int troca,aux;
    do{
        troca=0;
        for(int i=0;i<n-1;i++){
            if(v[n]>v[n+1]){
                aux=v[n];
                v[n]=v[n+1];
                v[n+1]=aux;
                troca=1;
            }
        }
    }while(troca);
}
*/

int main()
{
    int vetor[11]={30,8,-5,-1,4,-14,21,23,54,67,90};
    for(int i=0;i<11;i++){
        printf("|%d ",vetor[i]);
    }
    printf("\n");
    BubbleSort(vetor,11);
    for(int i=0;i<11;i++){
        printf("|%d ",vetor[i]);
        
    }
     printf("\n");
    

    return 0;
}
