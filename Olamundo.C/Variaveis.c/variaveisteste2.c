#include <stdio.h>

int main(){
    int idade;// %d ou %i podem ser usados
    float altura; /* %e é mais para anotação cientifica, mas posso usar o %f, 
    para limitar a quantidade de casa basta por %.2f para duas casa, %.3f para 3 casas e assim por diante*/
    char nome[20]; // Houve usso do array de forma simples só para entender
    char opcao; //Aqui coloco entre '' apostrofe para indicar uma letra

        printf("Qual o seu nome?\n");
        scanf("%s", nome);
        
        printf("Qual a sua idade?\n");
        scanf("%d", &idade);
        
        printf("Qual a sua altura?\n");
        scanf(" %f", &altura);
        
        printf("Qual a Primeira Letra do seu Nome?\n");
        scanf(" %c", &opcao);
        
        printf("Seu Nome é: %s\n", nome);
        printf("Sua idade e: %d anos\n", idade);
        printf("Você tem: %.2fm\n", altura);
        printf("A Primeira Letra do seu nome: %c\n", opcao);

        return 0;
}