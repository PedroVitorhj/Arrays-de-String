#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[21];
    int consoantes = 0;
    int vogal = 0;
    int espaco = 0;

    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);

    for(int i = 0; i < strlen(nome) - 1 ;i++){

        if(nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E' || nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O' ||nome[i] == 'u' || nome[i] == 'U'){

            vogal += 1;

        }

        else if(nome[i] == ' '){

            espaco += 1;

        }
        else if(nome[i] == '\0'){

            espaco += 1;

        }


        else{

            consoantes += 1;

        }

    }

    printf("\nQuantidades de vogais: %d, \n Quantidade de consoantes: %d,\n Quantidade de espacos: %d. ",vogal,consoantes,espaco);



    return 0;

}
