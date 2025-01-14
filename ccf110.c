#include <stdio.h>
#include <string.h>
#include "Receita.h"
int main()
{

    struct Receita receita[20];
    strcpy(receita[0].nomeReceita,"Pizza");

    // ADICIONAR OS NOMES DAS RECEITAS NO VETOR receita
    // ASSIM COMO ESSE TRECHO AÍ EM CIMA, PARA CADA NOME DE RECEITA

    char listaReceita [20][100];
    char opcao[200];
    int encontrou;

    // ADICIONAR OS MODOS DE PREPARO DE CADA RECEITA
    // AQUI É PARECIDO COM A PARTE DE CIMA ONDE VOCÊ ADICIONOU OS NOMES DAS RECEITAS

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

    // PRINT DE TODOS OS NOMES DE RECEITAS E O ÍNDICE DELAS
    // "ÍNDICE. NOME"


    // SCANF DA OPÇÃO DO USUÁRIO
    // O SCANF AQUI É PARA SER DE UM NÚMERO INTEIRO QUE SERÁ O ÍNDICE DA RECEITA


    // UM IF ELSE PARA RETORNAR MENSAGENS DE ERRO CASO O USUÁRIO DIGITE UM NÚMERO MAIOR QUE O DA LISTA
    // VOCÊ VAI COLOCAR ESSE IF ELSE EM UMA FUNÇÃO. PODE SER DEPOIS.


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