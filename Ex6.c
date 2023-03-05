#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[21];
    char arvalap[21];


    printf("\nDigite uma palavra: ");
    fgets(palavra, 20, stdin);

    int tam = strlen(palavra) + 1;

    for(int i = tam ; i > 0  ;i--){
        if(palavra[i] != '\0'){

            printf("\n Letra: %c", palavra[i]);
            arvalap[i] = palavra[i];

        }
    }

    printf("\nA frase invertida fica: %s.",arvalap);

    return 0;
}
