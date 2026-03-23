//Esse desafio corresponde ao de nível mestre/avançado do Tema 3
//Como foi informado que basta subir um dos desafios do tema, escolhi esse.
#include <stdio.h>

int main() {

    int opcao;
    int resultado;
    int resultado2;
    float soma1, soma2;
    char carta1[50] = "A Carta 1 venceu essa rodada!";
    char carta2[50] = "A Carta 2 venceu essa rodada!";

    //Variavéis pra armazenar os valores da Carta 1.
    char pais1[50] = "Coreia do Sul";
    char codigo1[4] = "A01";
    char cidade1[50] = "Seul";
    int populacao1 = 51000000;
    float area1 = 100210000;
    float pib1 = 200000000;
    int NumeroPontosTuristicos1 = 12; 
    float densidadePopulacional1 = populacao1/area1;
    float pibPerCapita1 = pib1/populacao1;
    
    //Variavéis pra armazenar os valores da Carta 2.
    char pais2[50] = "Brasil";
    char codigo2[4] = "A02";
    char cidade2[50] = "Brasília";
    int populacao2 = 211700000;
    float area2 = 8151767000;
    float pib2 = 211700000;
    int NumeroPontosTuristicos2 = 15; 
    float densidadePopulacional2 = populacao2/area2;
    float pibPerCapita2 = pib2/populacao2;

    
    //Print das informações da Carta 1
    printf("Carta 1: \n");
    printf("País: %s\n", pais1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", NumeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);
    soma1 = populacao1 + area1 + pib1 + NumeroPontosTuristicos1 + densidadePopulacional1;

    //Print das informações da Carta 2
    printf("Carta 2: \n");
    printf("País: %s\n", pais2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", NumeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);
    soma2 = populacao2 + area2 + pib2 + NumeroPontosTuristicos2 + densidadePopulacional2;

    //Menu interativo
    printf("O que você quer comparar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n\n");
    scanf("%d", &opcao);

    printf("País 1:%s\n", pais1);
    printf("País 2:%s\n\n", pais2);

    switch(opcao){
        case 1:
            printf("Atributo de comparação: População\n");
            printf("População Carta 1: %d\n", populacao1);
            printf("População Carta 2: %d\n", populacao2);
            resultado = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1 ? 2 : 0);
            break;
        case 2:
            printf("Atributo de comparação: Área\n");
            printf("Área Carta 1: %.2f\n", area1);
            printf("Área Carta 2: %.2f\n", area2);
            resultado = (area1 > area2) ? 1 : (area2 > area1 ? 2 : 0);
            break;
        case 3:
            printf("Atributo de comparação: PIB\n");
            printf("PIB Carta 1: %.2f\n", pib1);
            printf("PIB Carta 2: %.2f\n", pib2);
            resultado = (pib1 > pib2) ? 1 : (pib2 > pib1 ? 2 : 0);
            break;
        case 4:
            printf("Atributo de comparação: Número de Pontos Turísticos\n");
            printf("Número de Pontos Turísticos Carta 1: %d\n", NumeroPontosTuristicos1);
            printf("Número de Pontos Turísticos Carta 2: %d\n", NumeroPontosTuristicos2);
            resultado = (NumeroPontosTuristicos1 > NumeroPontosTuristicos2) ? 1 : (NumeroPontosTuristicos2 > NumeroPontosTuristicos1 ? 2 : 0);
            break;
        case 5:
            printf("Atributo de comparação: Densidade Populacional\n");
            printf("Densidade Populacional Carta 1: %.2f\n", densidadePopulacional1);
            printf("Densidade Populacional Carta 2: %.2f\n", densidadePopulacional2);
            resultado = (densidadePopulacional1 < densidadePopulacional2) ? 1 : (densidadePopulacional2 < densidadePopulacional1 ? 2 : 0);
            break;
        default:
            printf("Opção inválida");
    }

    //Resultado da comparação por atributo
    if(resultado == 1){
            printf("%s\n\n", carta1);
        }else if (resultado == 2){
            printf("%s\n\n", carta2);
        }else {
            printf("Empate!\n\n");
        }

    //Resultado da soma e comparação
    resultado2 = (soma1 > soma2) ? 1 : (soma2 > soma1) ? 2 : 0;
    printf("Soma carta 1: %.2f\n", soma1);
    printf("Soma carta 2: %.2f\n", soma2);

    if(resultado2 == 1){
        printf("%s\n\n", carta1);
    }else if (resultado2 == 2){
        printf("%s\n\n", carta2);
    }else {
        printf("Empate!\n\n");
    }

    
    //Resultado final
    if((resultado == 1) && (resultado2 == 1)){
        printf("Carta 1 venceu o jogo!");
    }else if ((resultado == 2) && (resultado2 == 2)) {
        printf("Carta 2 venceu o jogo!");
    }else {
        printf("Empate");
    }
    

}
