#include <stdio.h>

typedef enum genero{
    MASCULINO,
    FEMININO,
    NEUTRO
}Genero;

typedef struct pessoa{
    char nome[50];
    int idade;
    Genero genero;
}Pessoa;

int main(void){

    Pessoa pessoa; //variavel pessoa
    printf("escreva o nome da pessoa: ");
    scanf(" %[^\n]s", &pessoa.nome);
    printf("escreva a idade dA pessoa: ");
    scanf(" %d", &pessoa.idade);
    printf("escreva o genero da pessoa: 0: MUSCULINO 1: FEMININO 2: NEUTRO\n");
    scanf(" %d", (int*)&pessoa.genero);

    if(pessoa.genero ==  MASCULINO){
        printf("Nome: %s\n", pessoa.nome);
        printf("Idade: %d\n", pessoa.idade);
        printf("Genero: masculino");
    } 

    else if(pessoa.genero == FEMININO){
        printf("Nome: %s\n", pessoa.nome);
        printf("Idade: %d\n", pessoa.idade);
        printf("Genero: feminino");

    } 
    else{
        printf("Nome: %s\n", pessoa.nome);
        printf("Idade: %d\n", pessoa.idade);
        printf("Genero: neutro");

    }
    return 0;
}