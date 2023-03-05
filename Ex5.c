#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10] = {"0101010111"};
    int cont = 0;

    for(int i = 0; i < strlen(str) - 1 ;i++){

        if(str[i] == '1'){

            cont ++;

        }

    }

    printf("\nNa string: %s\n Existe: %d numeros 1 s\n", str, cont);

    return 0;
}
