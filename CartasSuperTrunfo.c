#include <stdio.h>

int main(){
    char estado1[20], estado2[20], codigocarta1[20], codigocarta2[20], cidade1[20], cidade2[20];
    int pturisticos1, pturisticos2;
    unsigned long int populacao1, populacao2; //Variáveis Nível Mestre
    float area1, area2, pib1, pib2; //Variáveis nível Novato
    float densipopulacional1, densipopulacional2;
    float pibpercapita1, pibpercapita2; //variáveis no nível Aventureiro
    float SuperPoder1, SuperPoder2; //Variáveis Nívem Mestre
   
    //informações carta 1 

    printf("Carta 1: \n");

    printf("digite o estado: \n");
    scanf("%c", &estado1);
    printf("digite o código da carta: \n");
    scanf("%c", &codigocarta1);
    printf("digite o nome da cidade: \n");
    scanf("%c", &cidade1);
    printf("digite a população: \n");
    scanf("%lu", &populacao1);
    printf("digite a área: \n");
    scanf("%f", &area1);
    printf("digite o pib: \n");
    scanf("%f", &pib1);
    printf("digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos1);
    
    //Nível Aventureiro

    densipopulacional1 = (populacao1 / area1); //Calcular Densidade Populacional NV
    pibpercapita1 = (pib1 / populacao1); //Nível Aventureiro


    //informações carta 2
    printf("Carta 2: \n");

    printf("digite o estado: \n");
    scanf("%c", &estado2);
    printf("digite o codigo da carta: \n");
    scanf("%c", &codigocarta2);
    printf("digite o nome da cidade: \n");
    scanf("%c", &cidade2);
    printf("digite a população: \n");
    scanf("%lu", &populacao2);
    printf("digite a área: \n");
    scanf("%f", &area2);
    printf("digite o pib: \n");
    scanf("%f", &pib2);
    printf("digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos2);

    // Nível Aventureiro

    densipopulacional2 = (populacao2 / area2); //Nível Aventureiro
    pibpercapita2 = (pib2 / populacao2); //Nível Aventureiro

    //Iniciando Nível Mestre -

    SuperPoder1 = (pturisticos1+populacao1+area1+(1/densipopulacional1)+pib1);
    SuperPoder2 = (pturisticos2+populacao2+area2+(1/densipopulacional2)+pib2);

    //Resultado da Primeira Carta

    printf("-----Primeira Carta-----. \n");
    printf("A CARTA 1 É. \n");
    printf("Estado é: %c\n", estado1);
    printf("cidade é: %c\n", cidade1);
    printf("Código é: %c\n", codigocarta1);
    printf("População é: %lu\n", populacao1);
    printf("Área é: %.2f\n", area1);
    printf("Pib é: %.2f milhões\n", pib1);
    printf("Pontos turísticos é: %d\n", pturisticos1);
    printf("Densidade Populacional é: %.2f\n", densipopulacional1); //Monstrar densidade populacional do Nívem Aventureiro
    printf("Pib per capita é: %.2f\n", pibpercapita1); //Mostrar pib per capita do Nívem Aventureiro

    //Resultado da Segunda Carta

    printf("-----Segunda Carta-----. \n");
    printf("A CARTA 1 É. \n");
    printf("Estado é: %c\n", estado2);
    printf("cidade é: %c\n", cidade2);
    printf("Código é: %c\n", codigocarta2);
    printf("População é: %lu\n", populacao2);
    printf("Área é: %.2f\n", area2);
    printf("Pib é: %.2f milhões\n", pib2);
    printf("Pontos turísticos é: %d\n", pturisticos2);
    printf("Densidade Populacional é: %.2f\n", densipopulacional2); //Mostrar densidade populacional do Nível Aventureiro
    printf("Pib per capita é: %.2f\n", pibpercapita2); //Mostrar Pib per capita do Nível Aventureiro

    //Última parte Nível Mestre
    //Comparar carta e Verificar o Vencedor

    printf("------A CARTA VENCEDORA É------: \n");
    printf("População: carta 1 = %lu | Carta 2 = %lu\n", (populacao1>populacao2), (populacao2>populacao1));
    printf("Área: Carta 1 = %.2f | Carta 2 = %.2f\n", (area1>area2), (area2>area1));
    printf("Pib: Carta 1 = %.2f | Carta 2 = %.2f\n", (pib1>pib2), (pib2>pib1));
    printf("Pontos Turisticos: Carta 1 = %d | Carta 2 = %d", (pturisticos1>pturisticos2), (pturisticos2>pturisticos1));
    printf("Densidade Populacional: Carta1 = %.2f | Carta 2 = %.2f\n", (densipopulacional1>densipopulacional2), (densipopulacional2>densipopulacional1));
    printf("Pib Per Capita: Carta1 = %.2f | CArta 2 = %.2f\n", (pibpercapita1>pibpercapita2), (pibpercapita2>pibpercapita1));
    printf("Super Poder: Carta 1 = %d | Carta 2 = %d\n", (SuperPoder1>SuperPoder2), (SuperPoder2>SuperPoder1));
    printf("Fim do Código\n");

    return 0; 
}
