#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
     char nome1[21];
     char nome2[21];
     bool igual = true;


    printf("\nDigite o nome 1: ");
    fgets(nome1, 20, stdin);

    printf("\nDigite o nome 2: ");
    fgets(nome2, 20, stdin);


    for(int i = 0; i < strlen(nome1) - 1 ;i++){

        if(nome1[i] = nome2[i]){

            igual = false;

        }

    }

    if(igual = true){

        printf("\nAs frases sao iguais.");
    }
    else{
        printf("\nAs frases nao sao iguais.");
    }

    return 0;
}
