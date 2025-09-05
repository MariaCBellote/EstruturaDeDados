/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void insertionSort(int *v, int n){
    int aux,j;
    
    for(int i=1;i<n;i++){
        aux=v[i];
        for(j=i;(j>0) && (aux<v[j-1]);j--){
            v[j]=v[j-1];
        }
        v[j]=aux;
    }
}
int main()
{
    int vetor[11]={30,8,-5,-1,4,-14,21,23,54,67,90};
    for(int i=0;i<11;i++){
        printf("|%d ",vetor[i]);
    }
    printf("\n");
    insertionSort(vetor,11);
    for(int i=0;i<11;i++){
        printf("|%d ",vetor[i]);
        
    }
     printf("\n");
    

    return 0;
}
