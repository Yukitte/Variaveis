/*leia a media do aluno,if a media for > que 7 (aprovado)
Se a media for menor(Reprovado)
Se a media for >=4 <7(Recuperação)*/

#include <stdio.h>
int main (){
float media ;

printf("Insira sua média:");
scanf("%f",&media);

if(media>7){
    printf("APROVADO");
}else if (media<4){
    printf("REPROVADO");
}else if(media>=4<7){
    printf("RECUPERAÇÃO");
}

return 0;
}