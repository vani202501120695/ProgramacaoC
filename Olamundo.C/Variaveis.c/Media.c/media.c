/*
Será aplicado os conceitos estudados no nível básico, criando um programa em C que gerencia 
o cadastro de alunos em uma turma. 
Utilizarei variáveis para armazenar informações como:
nome, idade e matrícula dos alunos. 
E operadores de atribuição serão usados para atualizar os dados conforme necessário.

As funções printf e scanf serão usadas para interagir com o usuário, 
permitindo a entrada dos dados dos alunos e a exibição das informações cadastradas. 
Essa prática reforçará o entendimento sobre variáveis, tipos de dados e funções de entrada e saída, 
preparados para resolver problemas mais complexos.

O programa em C para cadastrar os dados dos alunos. 
Mostrará mais sobre variáveis, e a introdução dos operadores matemáticos e funções de entrada e saída. 
Usando os comandos printf e scanf.
*/

#include <stdio.h>

int main (){
    //Declaração das variáveis
    char nome[20];
    int idade, matricula;
    float altura;

        printf("Digite seu nome: \n");
        scanf("%s", &nome);
        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        printf("Digite sua Altura: \n");
        scanf("%f", &altura);
        printf("Digite sua Matricula: \n");
        scanf("%d", &matricula);

        printf("Nome: %s\n", nome);
        printf("Idade: %danos\n", idade);
        printf("Altura: %.2f\n", altura);
        printf("Matricula: %d\n", matricula);

        return 0;
}
