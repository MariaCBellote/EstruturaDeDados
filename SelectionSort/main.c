/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void selectionSort(int *v, int tamanho){
    // ordenar array
    int aux,menor;
    for(int i=0;i<tamanho-1;i++){
        menor=i;
        for(int n=i+1;n<tamanho;n++){
            if(v[n]<v[menor]){
               
                menor=n;
                
            }
           
        }
        if(i!=menor){ //achou um mneor diferente de i, que era o menor anterior
            aux=v[i];
            v[i]=v[menor];
            v[menor]=aux;
        }
    }
}
int main()
{
    int vetor[11]={30,8,-5,-1,4,-14,21,23,54,67,90};
    for(int i=0;i<11;i++){
        printf("|%d ",vetor[i]);
    }
    printf("\n");
    selectionSort(vetor,11);
    for(int i=0;i<11;i++){
        printf("|%d ",vetor[i]);
        
    }
     printf("\n");
    
     
    return 0;
}