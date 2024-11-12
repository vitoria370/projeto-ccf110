#include <stdio.h>
#include <string.h>
int main()
{
char listaReceita [20][200];
char opcao[200];


    strcpy(listaReceita[0],"Pizza");
    strcpy(listaReceita[1],"bolo de chocolate");

    scanf("%s",&opcao);

    for(int i = 0; i < 20; i++)
    {
        if(strcmp(opcao,listaReceita[i])==0)
        {
            printf("%s",listaReceita[i]);
        }

    }
}