#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char str[50] = {"Hello world!"};
    bool condicao = false;
    int i = 1;
    int tam = 0;

    while(condicao !=true){

            if(str[i] == '\0'){
                condicao = true;
                tam += 1;
            }
            else{
                tam += 1;
            }
            i++;

    }

    printf("String: %s e o tamanho: %d ",str,tam);

    return 0;
}
