#include <stdio.h>

int main() {
 float sal;

 printf("Escreva seu salario:");
 scanf("%f",&sal);

 if(sal>=1320){

    printf("Tá patrão");
 }else{

    printf("Salario mínimo");
 }



return 0;
}