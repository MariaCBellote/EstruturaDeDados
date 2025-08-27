/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int buscaBinaria(int *v,int n,int elem){
    int inicio,meio,final;
    inicio=0;
    final=n-1;
    
    while(inicio<=final){
        meio=(inicio+final)/2;
        if(v[meio]==elem){
            return meio;
        }
        else{
            if(v[meio]>elem){
                final=meio-1;
            }
            else {
                inicio=meio+1;
            }
        }
    }
    return -1;
}
int main()
{
    int vetor[10]={-8,-5,1,4,14,21,23,54,67,90};
    
    printf("Resultado: %i\n",buscaBinaria(vetor,10,20));
    printf("Hello World");

    return 0;
}
