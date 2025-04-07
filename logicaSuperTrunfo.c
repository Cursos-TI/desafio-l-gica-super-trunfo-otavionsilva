#include <stdio.h>

int main() {
    
    printf("***Super Trunfo!!***\n");
    
    // variáveis carta 0
    char codigo_cidade[3], sigla_estado_carta[10], nome_da_carta[30];
    unsigned long int populacao, pib_per_capita, densidade_populacional;
    int pontos_turisticos, opcao;
    float area, pib, super_poder;

    // Cidade 0
    printf("Digite o nome da Cidade 1 (a inicial do estado): ");
    scanf("%s", sigla_estado_carta);
    
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade);

    printf("Digite o a população da cidade %s: ",codigo_cidade);
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
    char codigo_cidade1[3], estado_carta1[50], nome_da_carta[30];
    unsigned long int populacao1, pib_per_capita1, densidade_populacional1;
    int pontos_turisticos1;
    float area1, pib1, super_poder1;
     
    // Cidade 1
    printf("\n\nDigite o nome da Cidade 2 (a inicial do estado): ");
    scanf("%s", estado_carta1);
    
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade1);

    printf("Digite o a população da cidade %s: ",codigo_cidade1);
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
    printf("O Nome da cidade É: %s\n", sigla_estado_carta);
    printf("O Código da cidade: %s\n", codigo_cidade);
    printf("A quantidade de pontos turísticos é: %d\n", pontos_turisticos);
    printf("A população da cidade é: %lu\n", populacao);
    printf("A área da cidade é: %.2f\n", area);
    printf("O PIB da cidade é: %.2f\n", pib);
    printf("A densidade populacional é: %lu\n", densidade_populacional);
    printf("O PIB Per Capita da cidade é: %lu\n", pib_per_capita);

    // Imprime os valores da carta 1
    printf("\n\n\n***Cidade 2***\n");
    printf("Dados da Carta 2 cadastrada\n");
    printf("O Nome da cidade É: %s\n", estado_carta1);
    printf("O Código da cidade: %s\n", codigo_cidade1);
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

    O nome dos dois países. OK
    O atributo usado na comparação. OK
    Os valores do atributo para cada carta. OK
    Qual carta venceu. OK
    Em caso de empate, exibir a mensagem "Empate!". OK
    */

    printf("Escolha qual atributo das Cartas %s%s e %s%s voce quer usar!!\n",sigla_estado_carta, codigo_cidade, estado_carta1, codigo_cidade1);
    printf("**** Menu de Escolha ****\n");
    printf("1-Pontos Turísticos\n");
    printf("2-População da Cidade\n");
    printf("3-Área da cidade\n");
    printf("4-PIB da Cidade\n");
    printf("5-Densidade Populacional\n");
    printf("6-PIB Per Capita\n");
    printf("Escolha um atributo para comparar no jogo:\n");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:

        printf("1-Quantidade de Pontos Turísticos\n");

        if (pontos_turisticos > pontos_turisticos1){

            printf("A Cidade 0 tem %d e a Cidade 1 %d de pontos turísticos!\n", pontos_turisticos, pontos_turisticos1);
            printf("A Cidade 0 ganhou!\n");

        } else if (pontos_turisticos < pontos_turisticos1) {

            printf("A Cidade 0 tem %d e a Cidade 1 %d de pontos turísticos!\n", pontos_turisticos, pontos_turisticos1);
            printf("A Cidade 1 ganhou!\n");

        } else {

            printf("A Cidade 0 tem %d e a Cidade 1 %d de pontos turísticos!\n", pontos_turisticos, pontos_turisticos1);
            printf("Deu empate!\n");

        }

        break;
    
    case 2:
        
        printf("2-População da cidade");
        
        if  (populacao > populacao1){

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de População!\n", populacao, populacao1);
            printf("A Cidade 0 ganhou!\n");
            

        } else if (populacao < populacao1){

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de População!\n", populacao, populacao1);
            printf("A Cidade 1 ganhou!\n");

        } else {

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de População!\n", populacao, populacao1);
            printf("Deu empate!\n");
        }

        break;

    case 3:
        
        printf("3-Área da Cidade");

        if  (area > area1){

            printf("A Cidade 0 tem %.2f e a Cidade 1 %.2f de Área!\n", area, area1);
            printf("A Cidade 0 ganhou!\n");

        } else if (area < area1) {

            printf("A Cidade 0 tem %.2f e a Cidade 1 %.2f de Área!\n", area, area1);
            printf("A Cidade 1 ganhou!\n");

        } else {

            printf("A Cidade 0 tem %.2f e a Cidade 1 %.2f de Área!\n", area, area1);
            printf("Deu empate!\n");

        }

        break;

    case 4:
        
        printf("4-PIB");

        if  (pib > pib1){

            printf("A Cidade 0 tem %.2f e a Cidade 1 %.2f de PIB!\n", pib, pib1);
            printf("A Cidade 0 ganhou!\n");

        } else if (pib < pib1){

            printf("A Cidade 0 tem %.2f e a Cidade 1 %.2f de PIB!\n", pib, pib1);
            printf("A Cidade 1 ganhou!\n");

        } else {

            printf("A Cidade 0 tem %.2f e a Cidade 1 %.2f de PIB!\n", pib, pib1);
            printf("Deu empate!\n");

        }

        break;

    case 5:
        
        printf("5-Densidade Populacional");
        printf("A menor densidade populacional vence!\n");

        if  (densidade_populacional < densidade_populacional1){

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de Densidade Populacional!\n", densidade_populacional, densidade_populacional1);
            printf("A Cidade 0 ganhou!\n");

        } else if (densidade_populacional > densidade_populacional1){

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de Densidade Populacional!\n", densidade_populacional, densidade_populacional1);
            printf("A Cidade 1 ganhou!\n");

        } else {

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de Densidade Populacional!\n", densidade_populacional, densidade_populacional1);
            printf("Deu empate!\n");

        }

        break;

    case 6:
        
        printf("6-PIB Per Capita");

        if  (pib_per_capita > pib_per_capita1){

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de PIB Per Capita!\n", pib_per_capita, pib_per_capita1);
            printf("A Cidade 0 ganhou!\n");

        } else if (pib_per_capita < pib_per_capita1){

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de PIB Per Capita!\n", pib_per_capita, pib_per_capita1);
            printf("A Cidade 1 ganhou!\n");

        } else {

            printf("A Cidade 0 tem %lu e a Cidade 1 %lu de PIB Per Capita!\n", pib_per_capita, pib_per_capita1);
            printf("Deu empate!\n");

        }

        break;

    default:

        printf("7-Opção Inválidade\n");
        
        break;
    }
    
    // Comparação if else
    /*
    printf("\n\n*** Comparação de Cartas ***\n");

     if (populacao > populacao1){
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