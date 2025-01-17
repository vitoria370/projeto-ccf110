#include <stdio.h>
#include <string.h>
#include "Receita.h"

void listarReceitas(struct Receita *receitas,int total)
{
    printf("Receitas disponiveis:\n");
    for(int i =0;i , total; i++)
    {
        printf("%d. %s\n",i + 1,receitas[i].nomeReceita);
    }
    printf("\n");
}
int validarOpção(int opcao, int total)
{
    if(opcao < 1 || opcao > total)
    {
        printf("Erro: numero invalido, escolha um indice %d.\n\n",total);
        return 0;
    }
    return 1;
}
void exibirReceita(struct Receita receitas[],int total,int indice)
{
    printf("\n--- Receita selecionada ---\n");
    printf("Nome: %s\n",receitas[indice].nomeReceita);
    printf("modo de preparo: %s\n",receitas[indice].mododePreparo);
    printf("quantidade de ingredientes: %d\n\n",receitas[indice].quantidade);
}


int main()
{
    struct Receita receita[20];
    strcpy(receita[0].nomeReceita,"Pizza");
    strcpy(receita[0].mododePreparo,"Prepare a massa , espalhe o molho,adicione queijo e asse por 20 minutos");
    receita[0].quantidade = 13;
    strcpy(receita[1].nomeReceita,"bolo de chocolate");
    strcpy(receita[1].mododePreparo,"misture farinha,acucar , chocolate,ovos, e asse por 35 minutos");
    receita[1].quantidade = 11;
    strcpy(receita[2].nomeReceita,"barra de chocolate");
    strcpy(receita[2].mododePreparo,"Derreta o chocolate , adicione nozes e resfrie em moldes");
    receita[2].quantidade = 5;
    strcpy(receita[3].nomeReceita,"pastel");
    strcpy(receita[3].mododePreparo,"recheie a massa , dobre e frite ate dourar");
    receita[3].quantidade = 10;
    strcpy(receita[4].nomeReceita,"temaki");
    strcpy(receita[4].mododePreparo,"enrrole o arroz e o peixe em alga nori");
    receita[4].quantidade = 12;
    strcpy(receita[5].nomeReceita,"feijoada carioca");
    strcpy(receita[5].mododePreparo,"cozinhe feijao preto com carnes defumadas e sirva com arroz");
    receita[5].quantidade = 18;
    strcpy(receita[6].nomeReceita,"tacos de carne moida");
    strcpy(receita[6].mododePreparo,"prepare carne temperada e sirva em tortilhas com vegetais");
    receita[6].quantidade = 19;
    strcpy(receita[7].nomeReceita,"salmao grelhado com molho de mostarda e mel");
    strcpy(receita[7].mododePreparo,"grelhe o salmao e sirva com molho de mostarda e mel");
    receita[7].quantidade = 16;
    strcpy(receita[8].nomeReceita, "Hamburguer Caseiro de Carne e Bacon");
    strcpy(receita[8].mododePreparo, "Modele a carne, grelhe com bacon e monte o hamburguer.");
    receita[8].quantidade = 12;
    strcpy(receita[9].nomeReceita, "Chili com Carne e Feijao");
    strcpy(receita[9].mododePreparo, "Cozinhe carne moída com feijao, tomate e especiarias.");
    receita[9].quantidade = 17;
    strcpy(receita[10].nomeReceita, "Coxinha de Frango");
    strcpy(receita[10].mododePreparo, "Prepare a massa, recheie com frango desfiado e frite.");
    receita[10].quantidade = 15;
    strcpy(receita[11].nomeReceita, "Bife com Molho");
    strcpy(receita[11].mododePreparo, "Grelhe o bife e sirva com molho de sua escolha.");
    receita[11].quantidade = 14;
    strcpy(receita[12].nomeReceita, "Torta de Limao");
    strcpy(receita[12].mododePreparo, "Prepare a massa, recheie com creme de limao e asse.");
    receita[12].quantidade = 10;
    strcpy(receita[13].nomeReceita, "Lasanha de Carne com Queijo");
    strcpy(receita[13].mododePreparo, "Monte camadas de massa, carne e queijo, e asse.");
    receita[13].quantidade = 20;
    strcpy(receita[14].nomeReceita, "Escondidinho de Carne Seca com Pure de Mandioquinha");
    strcpy(receita[14].mododePreparo, "Monte camadas de carne seca e pure, e asse ate dourar.");
    receita[14].quantidade = 16;
    strcpy(receita[15].nomeReceita, "Creme Brulee");
    strcpy(receita[15].mododePreparo, "Prepare o creme, leve ao forno e caramelize o acucar.");
    receita[15].quantidade = 6;
    strcpy(receita[16].nomeReceita, "Tabule de Quinoa");
    strcpy(receita[16].mododePreparo, "Misture quinoa cozida, hortela, tomate e temperos.");
    receita[16].quantidade = 10;
    strcpy(receita[17].nomeReceita, "Sopa de Abóbora com Gengibre");
    strcpy(receita[17].mododePreparo, "Cozinhe a abobora com gengibre, bata no liquidificador e sirva.");
    receita[17].quantidade = 10;
    strcpy(receita[18].nomeReceita, "Espaguete ao Pesto de Manjericao");
    strcpy(receita[18].mododePreparo, "Cozinhe o espaguete e misture com molho pesto.");
    receita[18].quantidade = 7;
    strcpy(receita[19].nomeReceita, "Moqueca Baiana de Peixe");
    strcpy(receita[19].mododePreparo, "Cozinhe o peixe com leite de coco, pimentões e azeite de dende.");
    receita[19].quantidade = 17;

    int totalReceitas;
    int opcao;
    listarReceitas(receita,totalReceitas);


    do {
        printf("Escolha o índice da receita que deseja visualizar: ");
        scanf("%d", &opcao);
    } while (!validarOpção(opcao, totalReceitas));



    exibirReceita(receita,totalReceitas,opcao-1);
    return 0;
}

