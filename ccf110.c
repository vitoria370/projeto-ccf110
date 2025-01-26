#include <stdio.h>
#include "Receita.h"
#include <string.h>

void salvarReceitaEmArquivo(const struct Receita *receitas) {
    FILE *file = fopen(receitas->nomeArquivo, "w");
    if (file == NULL) {
        printf("Erro ao criar o arquivo: %s\n", receitas->nomeArquivo);
        return;
    }
    
    fprintf(file, "Nome da Receita: %s\n", receitas->nomeReceita);
    fprintf(file, "Modo de Preparo:\n%s\n", receitas->mododePreparo);
    fclose(file);
    printf("Receita '%s' salva no arquivo '%s'.\n", receitas->nomeReceita, receitas->nomeArquivo);
}

void lerArquivoReceita(const char *nomeArquivo) {
    FILE *file = fopen(nomeArquivo, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo: %s\n", nomeArquivo);
        return;
    }

    printf("\n--- Conteúdo da Receita (%s) ---\n", nomeArquivo);
    char linha[256];
    while (fgets(linha, sizeof(linha), file)) {
        printf("%s", linha);
    }
    fclose(file);
    printf("\n--- Fim da Receita ---\n");
}

void listarReceitas(struct Receita *receitas,int total)
{
    printf("Receitas disponiveis:\n");
    for(int i =0; i < total; i++)
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


    struct Receita receitas[20] = {{"Pizza" ,"Pizza.txt", " Prepare a massa Prepare o molho asse e sirva",10},
    {"Bolo de Chocolate", "Bolo Chocolate.txt", "Misture os ingredientes asse e decore" , 10},
    {"Barra de chocolate", "Barra de Chocolate.txt", "Derreta o chocolate , adicione nozes , resfrie em moldes ", 8},
    {"Pastel", "Pastel.txt", "Prepare a massa recheio, Frite ,e sirva.", 8},
    {"Temaki", "Temaki.txt", " enrrole o arroz  e o peixe em alga nori", 8},
    {"Feijoada Carioca", "Feijoada Carioca.txt", "cozinhe feijao preto com carnes defumada  e sirva com arroz", 15},
    {"tacos de carne moida", "tacos de carne moida.txt", "prepare carne temperada e sirva em tortilhas com vegetais", 15},
    {"salmao grelhado com molho de mostarda e mel", "salmao grelhado com molho de mostarda e mel.txt", "grelhe o salmao  e sirva com molho de mostarda e mel ", 15},
    {"haburguer caseiro de carne e bacon", "hamburguer caseiro de carne e bacon .txt", "modele a carne , grelhe com bacon e monte o hamburguer", 15},
    {"chili com carne e feijao", "chili com carne e feijao.txt", "cozinhe carne moida com feijao , tomate e especiarias", 15},
    {"coxinha de frango", "feijoada coxinha de frango.txt", "prepare a massa , recheie com frango desfiado e frite", 15},
    {"bife com molho", "bife com molho.txt", "grelhe o bife e sirva com molho de sua escolha", 1},
    {"torta de limao", "torta de limao.txt", "prepare a massa , recheie com creme de limao e asse ", 15},
    {"lasanha de carne com queijo", "lasanha de carne com queijo.txt", "monte camadas de carne seca e pure , e asse até dourar", 15},
    {"creme brulee", "creme brulee.txt", "prepare o creme , leve ao forno e caramelize o acucar ", 15},
    {"tabule de quino","tabule de quino.txt", "misture quinoa cozida ,hortela,tomate e temperos", 15},
    {"sopa de abobora com gengibre", "sopa de abobora com gengibre.txt", "cozinhe a abobora com gengibre , bata no liquidificador e sirva", 15},
    {"espaguete ao pesto de manjericao ", "espaguete ao pesto de manjericao.txt", "cozinhe o espaguete e misture com molho pesto", 15},
    {"moqueca baiana de peixe", "moqueca baiana de peixe.txt", "cozinhe o peixe com leite de coco , pimentoes e azeite de dende", 15},
        };
    int totalReceitas = sizeof(receitas)/sizeof(receitas[0]);

    for(int i = 0; i < totalReceitas;i++)
    {
        salvarReceitaEmArquivo(&receitas[i]);
    }
    printf("\ndigite o indice da receita de 1 a %d :",totalReceitas);
    int opcao;
    scanf("%d",&opcao);
    if(opcao>= 1 && opcao <= totalReceitas)
    {
        lerArquivoReceita(receitas[opcao-1].nomeArquivo);

    }else
    {
        printf("!opcao invalida!\n");
    }
    return 0;
    }
