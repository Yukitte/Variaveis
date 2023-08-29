#include <stdio.h>

int main(){ 
    int idade;

printf("Escreva sua idade:");
scanf("%d",&idade);

if(idade >= 18){

printf("\n Já pode ser preso");
}else{
    printf("\nFedendo a leite ainda");
}

    return 0;
}