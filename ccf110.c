#include <stdio.h>
#include <string.h>
int main()
{
char listaReceita [20][200];
char opcao[200];


    strcpy(listaReceita[0],"Pizza");
    strcpy(listaReceita[1],"bolo de chocolate");
    strcpy(listaReceita[2],"barra de chocolate");
    strcpy(listaReceita[3],"pastel");
    strcpy(listaReceita[4],"temaki");
    strcpy(listaReceita[5],"Feijoada Carioca");
    strcpy(listaReceita[6],"Tacos de Carne Moída" );
    strcpy(listaReceita[7],"Salmão Grelhado com Molho de Mostarda e Mel");
    strcpy(listaReceita[8],"Hambúrguer Caseiro de Carne e Bacon");
    strcpy(listaReceita[9],"Chili com Carne e Feijão");
    strcpy(listaReceita[10],"coxinha de frango");
    strcpy(listaReceita[11],"bife com molho");
    strcpy(listaReceita[12],"torta de limão");
    strcpy(listaReceita[13],"lasanha de carne com queijo");
    strcpy(listaReceita[14],"Escondidinho de Carne Seca com Purê de Mandioquinha");
    strcpy(listaReceita[15],"Creme Brulée");
    strcpy(listaReceita[16],"Tabule de Quinoa");
    strcpy(listaReceita[17],"Sopa de Abóbora com Gengibre");
    strcpy(listaReceita[18],"Espaguete ao Pesto de Manjericão");
    strcpy(listaReceita[19],"Moqueca Baiana de Peixe");

    scanf("%s",&opcao);
    int quantidade [20];
    quantidade[0] = 13;
    quantidade[1] = 11;
    quantidade[2] = 5;
    quantidade[3] = 10;
    quantidade[4] = 12;
    quantidade[5] = 18;
    quantidade[6] = 19;
    quantidade[7] = 16;
    quantidade[8] = 12;
    quantidade[9] = 17;
    quantidade[10] = 15;
    quantidade[11] = 14;
    quantidade[12] = 10;
    quantidade[13] = 20;
    quantidade[14] = 16;
    quantidade[15] = 6;
    quantidade[16] = 10;
    quantidade[17] = 10;
    quantidade[18] = 7;
    quantidade[19] = 17;


    for(int i = 0; i < 20; i++)
    {
        if(strcmp(opcao,listaReceita[i])==0)
        {
            printf("%s\n",listaReceita[i]);

            printf("%d\n",quantidade[i]);

            break;
        }


    }


}