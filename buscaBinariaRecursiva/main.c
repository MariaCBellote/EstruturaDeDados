/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int buscaBinariaRecursiva(int *v,int inicio,int final,int elem){
    
    if(inicio<=final){
        int meio=(inicio+final)/2;
        if(v[meio]==elem){
            return meio;
        }
        else{
            if(v[meio]>elem){
                return buscaBinariaRecursiva(v,inicio,meio-1,elem);
            }
            else {
                return buscaBinariaRecursiva(v,meio+1,final,elem);
            }
        }
    }
    return -1;
}
int main()
{
    int vetor[10]={-8,-5,1,4,14,21,23,54,67,90};
    
    printf("Resultado: %i\n",buscaBinariaRecursiva(vetor,0,9,20));
    printf("Hello World");

    return 0;
}
