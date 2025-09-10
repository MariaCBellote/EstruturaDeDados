/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void merge(int *v,int i,int m,int f){
 temp= (int *) malloc(tamanho*sizeof(int));   
 
  
 
 
}
void mergeSort (int *v, int inicio, int fim){
    int meio;
    if(inicio<fim){
        meio=floor(inicio+fim)/2;
        mergeSort(v,inicio,meio);
        mergeSort(v,meio+1,fim);
        merge(v,inicio,meio,fim);
    }
}


int main()
{
    printf("Hello World");

    return 0;
}
