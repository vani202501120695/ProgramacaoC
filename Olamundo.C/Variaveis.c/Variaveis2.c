/*Agora vou aplicar as variaveis, aprendendo a usar printf para imprimir na tela os valores das variaveis
Lembrando que declaro essas variaveis e as declaro*/

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

    int idade = 37;// %d ou %i podem ser usados
    float altura = 1.75; /* %e é mais para anotação cientifica, mas posso usar o %f, 
    para limitar a quantidade de casa basta por %.2f para duas casa, %.3f para 3 casas e assim por diante*/
    char nome[20] = "Vanessa"; // Houve usso do array de forma simples só para entender
    char opcao = 'V';

        printf("A idade da %s e: %d anos\n", nome, idade);
        printf("A Altura e: %.2f\n", altura);
        printf("A Primeira letra e: %c\n", opcao);


    return 0;
}