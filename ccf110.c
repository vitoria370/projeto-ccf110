#include <stdio.h>
#include <string.h>
int main()
{
    char listaReceita [20][200];
    char opcao[200];
    int encontrou = 0;

    strcpy(listaReceita[0],"Pizza");
    strcpy(listaReceita[1],"bolo de chocolate\n");
    strcpy(listaReceita[2],"barra de chocolate\n");
    strcpy(listaReceita[3],"pastel\n");
    strcpy(listaReceita[4],"temaki\n");
    strcpy(listaReceita[5],"Feijoada Carioca\n");
    strcpy(listaReceita[6],"Tacos de Carne Moida\n" );
    strcpy(listaReceita[7],"Salmao Grelhado com Molho de Mostarda e Mel\n");
    strcpy(listaReceita[8],"Hamburguer Caseiro de Carne e Bacon\n");
    strcpy(listaReceita[9],"Chili com Carne e Feijao\n");
    strcpy(listaReceita[10],"coxinha de frango\n");
    strcpy(listaReceita[11],"bife com molho\n");
    strcpy(listaReceita[12],"torta de limao\n");
    strcpy(listaReceita[13],"lasanha de carne com queijo\n");
    strcpy(listaReceita[14],"Escondidinho de Carne Seca com Pure de Mandioquinha\n");
    strcpy(listaReceita[15],"Creme Brulee\n");
    strcpy(listaReceita[16],"Tabule de Quinoa\n");
    strcpy(listaReceita[17],"Sopa de Abobora com Gengibre\n");
    strcpy(listaReceita[18],"Espaguete ao Pesto de Manjericao\n");
    strcpy(listaReceita[19],"Moqueca Baiana de Peixe\n");

    fgets(opcao, 200, stdin);

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

            encontrou =1;

        }
        if(encontrou == 1)
        {
            break;
        }
    }
    if(encontrou == 0)
    {
        printf("nao encontrou\n");
    }



    return 0;
}