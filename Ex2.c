#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[21];

    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);

    if(nome[0] == 'a' || nome[0] == 'A' ){

        printf("Nome : %s", nome);

    }

    else{

        printf("Nome não começa com a letra A");

    }

    return 0;
}
