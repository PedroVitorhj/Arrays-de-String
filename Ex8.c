#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[51];
    char str2[51];
    int espaco = 0;


    printf("\nDigite uma frase: ");
    fgets(str, 50, stdin);

    for(int i = 0; i < strlen(str) - 1 ;i++){

        str2[i] = str[i] + 1;

    }

    printf("\nPalavra digitada: %s" , str);
    printf("\nCódigo inicial: %d" , str);
    printf("\nPróximo código: %d", str2);
    printf("\nString resultante: %s", str2);



    return 0;
}
