//Essa atividade correponde a do Tema 2 modulo de nível mestre/avançado.
//Nas instruções informavam que bastava subir um dos três desafios do Tema 2, escolhi subir esse.
#include <stdio.h>

int main() {

    //Variavéis pra armazenar os valores da Carta 1.
    char estado1[50];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int NumeroPontosTuristicos1; 
    float densidadePopulacional1;
    float pibPerCapita1;
    float SuperPoder1;
    char vencedor1[50] = "Carta 1 venceu (1)";

    
    //Variavéis pra armazenar os valores da Carta 2.
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int NumeroPontosTuristicos2; 
    float densidadePopulacional2;
    float pibPerCapita2;
    float SuperPoder2;
    char vencedor2[50]  = "Carta 2 venceu (0)";

    //Carta 1
    printf("Digite o estado da primeira carta: ");
    scanf(" %s", estado1);
    printf("Digite o código da primeira carta: ");
    scanf(" %s", codigo1);
    printf("Digite a cidade da primeira carta: ");
    scanf(" %s", cidade1);
    printf("Digite a população da primeira carta: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área da primeira carta: ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira carta: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turisticos da primeira carta: ");
    scanf(" %d", &NumeroPontosTuristicos1);
    densidadePopulacional1 = populacao1/area1;
    pibPerCapita1 = pib1/populacao1;
    SuperPoder1 = (float) (populacao1 + area1 + pib1 + NumeroPontosTuristicos1 + densidadePopulacional1 + pibPerCapita1);
    
   //Carta 2
    printf("Carta 2: \n");
    printf("Digite o estado da segunda carta: ");
    scanf(" %s", estado2);
    printf("Digite o código da segunda  carta: ");
    scanf(" %s", codigo2);
    printf("Digite a cidade da segunda  carta: ");
    scanf(" %s", cidade2);
    printf("Digite a população da segunda  carta: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área da segunda carta: ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda  carta: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turisticos da segunda  carta: ");
    scanf(" %d", &NumeroPontosTuristicos2);
    densidadePopulacional2 = populacao2/area2;
    pibPerCapita2 = pib2/populacao2;
    SuperPoder2 = (float) (populacao2 + area2 + pib2 + NumeroPontosTuristicos2 + densidadePopulacional2 + pibPerCapita2);

    //Print das comparações
    printf("Comparação de Cartas: \n");
    printf("População: %s\n", populacao1 > populacao2 ? vencedor1 : vencedor2);
    printf("Área: %s\n", area1 > area2 ? vencedor1 : vencedor2);
    printf("PIB: %s\n", pib1 > pib2 ? vencedor1 : vencedor2);
    printf("Número de Pontos Turisticos: %s\n", NumeroPontosTuristicos1 > NumeroPontosTuristicos2 ? vencedor1 : vencedor2);
    printf("Densidade Populacional: %s hab/km²\n", densidadePopulacional1 < densidadePopulacional2 ? vencedor1 : vencedor2);
    printf("PIB per Capita: %s reais\n", pibPerCapita1 > pibPerCapita2 ? vencedor1 : vencedor2);
    printf("SuperPoder: %s\n", SuperPoder1 > SuperPoder2 ? vencedor1 : vencedor2);
    //Coloquei os operadores ternários como opção pra deixar o código mais limpo, já que não podemos usar o if e else completo ainda 
}
