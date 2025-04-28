#include <stdio.h>
int main(){

    //definindo variaveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    // variaveis nivel aventureiro
    float densidadepop1, densidadepop2;
    float pibcapta1, pibcapta2;
    // variaveis nivel mestre
    float Superpoder1, Superpoder2;
    // Inserindo dados das Cartas

    // Primeira Carta
    printf("Defina os dados da Carta 1:\n");

    printf("Estado: (A-H) (Escolha uma letra de A a H)");
    scanf("%c", &estado1);

    printf("Código da Carta: (ex: A1)");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome1);

    printf("Digite a População:");
    scanf("%d", &populacao1);

    printf("Digite a area: (em km²)");
    scanf("%f", &area1);

    printf("Digite o PIB:(Em bilhões de reais)");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pontosturisticos1);

    //calculos para : densidade populacional, PIB per Capita e Super poder

    densidadepop1 = populacao1 / area1;

    pibcapta1 = pib1 / populacao1;

    Superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibcapta1;

    

    //Segunda Carta

    printf("Defina os dados da Carta 2:\n");

    printf("Estado: (A-H) (Escolha uma letra de A a H)");
    scanf("%c", &estado2);

    printf("Código da Carta: (ex: B2)");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome2);

    printf("Digite a População:");
    scanf("%d", &populacao2);

    printf("Digite a area: (em km²)");
    scanf("%f", &area2);

    printf("Digite o PIB:(Em bilhões de reais)");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos:");
    scanf("%d", &pontosturisticos2);

    //calculos para : densidade populacional, PIB per Capita e Super poder

    densidadepop2 = populacao2/area2;

    pibcapta2 = pib2/populacao2;

    Superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibcapta2;



    // Exibindo as cartas

    // Carta 1

    printf("\n--- Carta 1 ---\n"); //Centraliza (Carta 1)
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Area: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n" ,pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %f hab/km²\n", densidadepop1);
    printf("PIB per Capita: %f reais\n", pibcapta1);
    printf("Super Poder da Carta: %.2f\n", Superpoder1);


    // Carta 2


    printf("\n--- Carta 2 ---\n"); // Centraliza (Carta 2)
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n" ,pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %f reais\n", pibcapta2);
    printf("Super Poder da Carta: %.2f\n", Superpoder2);


    // comparação das cartas com operadores relacionais

    printf("\n--- Comparação das Cartas ---\n"); //centraliza (comparação das cartas)
    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu %d\n",area1 > area2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu %d\n", densidadepop1 < densidadepop2);
    printf("PIB per Capita: Carta 1 venceu %d\n", pibcapta1 > pibcapta2);
    printf("Super Poder: Carta 1 venceu %d\n", Superpoder1 > Superpoder2);


    return 0;



}