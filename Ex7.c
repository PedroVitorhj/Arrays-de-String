#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[21];
    int espaco = 0;



    printf("\nDigite uma frase: ");
    fgets(str, 20, stdin);

    for(int i = 0; i < strlen(str) - 1 ;i++){

        if(str[i] == ' '){

            espaco += 1;

        }
    }

    printf("\nQuantidade de espacos: %d. ",espaco);




    return 0;
}
