/*Aqui pretendo deixar descrito o uso do scanf para entender o que quero, printf impreme e o
scanf introduz um dado, para que esse dado seja impresso vou precisar do scanf*/

/* 
%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres
*/

#include <stdio.h>

int main(){
    int idade;// %d ou %i podem ser usados
    float altura; /* %e é mais para anotação cientifica, mas posso usar o %f, 
    para limitar a quantidade de casa basta por %.2f para duas casa, %.3f para 3 casas e assim por diante*/
    char nome[20]; // Houve usso do array de forma simples só para entender
    char opcao; //Aqui coloco entre '' apostrofe para indicar uma letra

        printf("Qual o seu nome?\n");
        scanf("%s", nome);
        printf("Seu Nome é: %s\n", nome);

        printf("Qual a sua idade?\n");
        scanf("%d", &idade);
        printf("Sua idade e: %d anos\n", idade);

        printf("Qual a sua altura?\n");
        scanf(" %f", &altura);
        printf("Você tem: %.2fm\n", altura);

        printf("Qual a Primeira Letra do seu Nome?\n");
        scanf(" %c", &opcao);
        printf("A Primeira Letra do seu nome: %c\n", opcao);

        return 0;
}