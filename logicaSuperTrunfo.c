#include <stdio.h>

int main() {
    
    printf("***Super Trunfo!!***\n");
    
    // variáveis carta 0
    char numero_estado[3], estado_carta[50];
    unsigned long int populacao, pib_per_capita, densidade_populacional;
    int pontos_turisticos, opcao;
    float area, pib, super_poder;

    // Cidade 0
    printf("Digite o nome da Cidade 1 (a inicial do estado): ");
    scanf("%s", estado_carta);
    
    printf("Digite o codigo da cidade: ");
    scanf("%s", numero_estado);

    printf("Digite o a população da cidade %s: ",numero_estado);
    scanf("%lu", &populacao);

    printf("Digite a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    // Calculo da densidade populacional e PIB Per Capita carta 0
    densidade_populacional = (float) populacao / area;
    pib_per_capita = pib / populacao;
    super_poder = (float) populacao + pontos_turisticos + area + pib + pib_per_capita;
    

    // variáveis carta 1
    char numero_estado1[3], estado_carta1[50];
    unsigned long int populacao1, pib_per_capita1, densidade_populacional1;
    int pontos_turisticos1;
    float area1, pib1, super_poder1;
     
    // Cidade 1
    printf("\n\nDigite o nome da Cidade 2 (a inicial do estado): ");
    scanf("%s", estado_carta1);
    
    printf("Digite o codigo da cidade: ");
    scanf("%s", numero_estado1);

    printf("Digite o a população da cidade %s: ",numero_estado1);
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
        
    //  Calculo da densidade populacional e PIB Per Capita carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = (float) populacao1 + pontos_turisticos1 + area1 + pib1 + pib_per_capita1;


    // Imprime os valores da carta 0
    printf("\n\n\n***Cidade 1***\n");
    printf("Dados da Carta 1 cadastrada \n");
    printf("O Nome da cidade É: %s\n", estado_carta);
    printf("O Código da cidade: %s\n", numero_estado);
    printf("A quantidade de pontos turísticos é: %d\n", pontos_turisticos);
    printf("A população da cidade é: %lu\n", populacao);
    printf("A área da cidade é: %.2f\n", area);
    printf("O PIB da cidade é: %.2f\n", pib);
    printf("A densidade populacional é: %.2lu\n", densidade_populacional);
    printf("O PIB Per Capita da cidade é: %.2lu\n", pib_per_capita);


    // Imprime os valores da carta 1
    printf("\n\n\n***Cidade 2***\n");
    printf("Dados da Carta 2 cadastrada\n");
    printf("O Nome da cidade É: %s\n", estado_carta1);
    printf("O Código da cidade: %s\n", numero_estado1);
    printf("A quantidade de pontos turísticos é: %d\n", pontos_turisticos1);
    printf("A população da cidade é: %lu\n", populacao1);
    printf("A área da cidade é: %.2f\n", area1);
    printf("O PIB da cidade é: %.2f\n", pib1);
    printf("A densidade populacional é: %lu\n", densidade_populacional1);
    printf("O PIB Per Capita da cidade é: %lu\n", pib_per_capita1); 
    
    //Comparação antiga
    /*printf("\n\n*** Comparação de Cartas ***\n");
    printf("População: Carta %d venceu\n", populacao > populacao1);
    printf("Área: Carta %d venceu\n", area > area1);
    printf("PIB: Carta %d venceu\n", pib > pib1);
    printf("Pontos Turísticos: Carta %d venceu\n", pontos_turisticos > pontos_turisticos1);
    printf("Desindade Populacional: Carta %d venceu\n", densidade_populacional < densidade_populacional1);
    printf("PIB Per Capita: Carta %d venceu\n", pib_per_capita > pib_per_capita1);
    printf("Super Poder: Carta %.0f venceu\n", super_poder > super_poder1);
    
    Neste desafio, o Super Trunfo fica mais interessante! Você implementará um menu interativo usando switch para
    que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, você usará estruturas
    de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras
    específicas para cada atributo. Este desafio é uma continuação do desafio anterior, onde você implementou o cadastro das cartas.
    */
    printf("**** Menu de Escolha ****");
    printf("1-Pontos Turísticos");
    printf("2-População da Cidade");
    printf("3-Área da cidade");
    printf("4-PIB da Cidade");
    printf("5-Densidade Populacional");
    printf("6-PIB Per Capita");
    printf("Escolha um atributo para comparar no jogo:");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:

        printf("1-Quantidade de Pontos Turísticos");

        if (pontos_turisticos > pontos_turisticos1){

            printf("A Cidade 0 ganhou!");
            printf("A Carta %s tem mais pontos turísticos do que a carta %s", estado_carta, estado_carta1);

        } else if (pontos_turisticos < pontos_turisticos1) {

            printf("A Cidade 1 ganhou!");
            printf("A Carta %s tem mais pontos turísticos do que a carta %s", estado_carta1, estado_carta);
            
        } else {

            printf("Deu empate!");

        }

        break;
    
    case 2:
        
        printf("2-População da cidade");
        
        if  (populacao > populacao1){

            printf("A Cidade 0 ganhou!");

        } else if (populacao < populacao1){

            printf("A Cidade 1 ganhou!");

        } else {

            printf("Deu empate!");

        }

        break;

    case 3:
        
        printf("3-Área da Cidade");

        if  (area > area1){

            printf("A Cidade 0 ganhou!");

        } else if (area < area1) {

            printf("A Cidade 1 ganhou!");

        } else {

            printf("Deu empate!");

        }

        break;

    case 4:
        
        printf("4-PIB");

        if  (pib > pib1){

            printf("A Cidade 0 ganhou!");

        } else if (pib < pib1){

            printf("A Cidade 1 ganhou!");

        } else {

            printf("Deu empate!");

        }

        break;

    case 5:
        
        printf("5-Densidade Populacional");

        if  (densidade_populacional > densidade_populacional1){

            printf("A Cidade 0 ganhou!");

        } else if (densidade_populacional < densidade_populacional1){

            printf("A Cidade 1 ganhou!");

        } else {

            printf("Deu empate!");

        }

        break;

    case 6:
        
        printf("6-PIB Per Capita");

        if  (pib_per_capita > pib_per_capita1){

            printf("A Cidade 0 ganhou!");

        } else if (pib_per_capita < pib_per_capita1){

            printf("A Cidade 1 ganhou!");

        } else {

            printf("Deu empate!");

        }

        break;

    default:

        printf("7-Opção Inválidade");
        
        break;
    }
    
    // Comparação if else
    printf("\n\n*** Comparação de Cartas ***\n");

    /* if (populacao > populacao1){
        printf("A pupolação da carta 1 venceu!!\n");
    } else {
        printf("A pupolação da carta 2 venceu!!\n");
    }
    
    if (area > area1){
        printf("A área da carta 1 venceu!!\n");
    } else {
        printf("A área da carta 2 venceu!!\n");
    }

    if (pib > pib1){
        printf("O PIB da carta 1 venceu!!\n");
    } else {
        printf("O PIB da carta 2 venceu!!\n");
    }

    if (pontos_turisticos > pontos_turisticos1){
        printf("A Carta 1 tem mais Pontos Turísticos\n");
    } else {
        printf("A Carta 2 tem mais Pontos Turísticos\n");
    }

    if (densidade_populacional < densidade_populacional1){
        printf("A Carta 1 tem menor Densidade Populacional!\n");
    } else {
        printf("A Carta 2 tem menor Densidade Populacional!\n");
    }

    if (pib_per_capita > pib_per_capita1){
        printf("O PIB Per Capita da Cidade 1 é maior!!");
    } else {
        printf("O PIB Per Capita da Cidade 2 é maior!!");
    }

    if (super_poder > super_poder1){
        printf("O super Poder da carta 1 venceu!!");
    } else {
        printf("O super Poder da carta 1 venceu!!");
    }
    */
    return 0;
}