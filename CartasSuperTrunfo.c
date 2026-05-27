#include <stdio.h>

int main(){

    //variaveis

    //scanf deixa um \n em buffer que quebraria o próximo fgets
    char limpeza_buffer[2];

    //carta1
    char estado1[50];       //letra que representa um estado
    char codigo1[10];       //letra do estado + número da carta
    char cidade1[50];       //nome da cidade
    int populacao1;         //estimativa da populacao na data
    float area1;            //area em km2
    float pib1;             //PIB da cidade
    int pontos_tur1;        //numero de pontos turisticos
    float densidade_pop1;   //densidade populacional
    float pib_percapta1;    //pib per capta

    //carta2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_tur2;
    float densidade_pop2;
    float pib_percapta2;


    //cadastro de cartas
    printf("CADASTRO DE CARTAS \n");
    printf("\n");

    //carta1
    printf("Cadastro da Carta 1 \n");

    printf("Informe o Estado: ");
    fgets(estado1, 50, stdin);

    printf("Informe o Codigo: ");
    fgets(codigo1, 10, stdin);

    printf("Informe o Nome da Cidade: ");
    fgets(cidade1, 50, stdin);

    printf("Informe a Populacao Estimada: ");
    scanf(" %d", &populacao1);

    printf("Informe a area em km2: ");
    scanf(" %f", &area1);

    printf("Informe o PIB: ");
    scanf(" %f", &pib1);

    printf("Informe o numero de Pontos Turisticos: ");
    scanf(" %d", &pontos_tur1);

    //calcular densidade populacional
    densidade_pop1 = populacao1 / area1;

    //calcular pib per capta
    pib_percapta1 = pib1 / populacao1;

    printf("Carta 1 CONCLUIDA \n");
    printf("\n");
    printf("\n");

    //limpar buffer
    fgets(limpeza_buffer, 2, stdin);



    //carta2
    printf("Cadastro da Carta 2 \n");

    printf("Informe o Estado: ");
    fgets(estado2, 50, stdin);
    
    printf("Informe o Codigo: ");
    fgets(codigo2, 10, stdin);

    printf("Informe o Nome da Cidade: ");
    fgets(cidade2, 50, stdin);

    printf("Informe a Populacao Estimada: ");
    scanf(" %i", &populacao2);

    printf("Informe a area em km2: ");
    scanf(" %f", &area2);

    printf("Informe o PIB: ");
    scanf(" %f", &pib2);

    printf("Informe o numero de Pontos Turisticos: ");
    scanf(" %i", &pontos_tur2);

    //calcular densidade populacional
    densidade_pop2 = populacao2 / area2;

    //calcular pib per capta
    pib_percapta2 = pib2 / populacao2;

    printf("Carta 2 CONCLUIDA \n");
    printf("\n");
    printf("\n");

    //limpar buffer
    fgets(limpeza_buffer, 2, stdin);


    
    //transicao
    printf("Gerando Cartas...");
    printf("\n");
    printf("\n");
    printf("\n");



    //imprimindo as cartas

    //carta1
    printf("CARTA 1 \n");
    printf("Estado: %s", estado1);
    printf("Codigo: %s", codigo1);
    printf("Cidade: %s", cidade1);
    printf("Populacao: %i \n", populacao1);
    printf("Area (km2): %.2f \n", area1);
    printf("PIB: %.3f \n", pib1);
    printf("Pontos Turisticos: %i \n", pontos_tur1);
    printf("Densidade Populacional: %.2f \n", densidade_pop1);
    printf("PIB per Capta: %.2f \n", pib_percapta1);
    printf("\n");
    printf("\n");

    //carta2
    printf("CARTA 2 \n");
    printf("Estado: %s", estado2);
    printf("Codigo: %s", codigo2);
    printf("Cidade: %s", cidade2);
    printf("Populacao: %i \n", populacao2);
    printf("Area (km2): %.2f \n", area2);
    printf("PIB: %.3f \n", pib2);
    printf("Pontos Turisticos: %i \n", pontos_tur2);
    printf("Densidade Populacional: %.2f \n", densidade_pop2);
    printf("PIB per Capta: %.2f \n", pib_percapta2);
    printf("\n");
    printf("\n");

    return 0;
    
}