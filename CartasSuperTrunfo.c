#include <stdio.h>

int main(){
    char estado1[20], estado2[20], codigocarta1[20], codigocarta2[20], cidade1[20], cidade2[20];
    int populacao1, populacao2, pturisticos1, pturisticos2;
    float area1, area2, pib1, pib2, //Variáveis nível Novato
    float densipopulacional1, densipopulacional2;;
    float pibpercapita1, pibpercapita2; //variáveis no nível Aventureiro
    //informações carta 1 

    printf("Carta 1: \n");

    printf("digite o estado: \n");
    scanf("%s", &estado1);
    printf("digite o código da carta: \n");
    scanf("%s", &codigocarta1);
    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("digite a população: \n");
    scanf("%d", &populacao1);
    printf("digite a área: \n");
    scanf("%f", &area1);
    printf("digite o pib: \n");
    scanf("%f", &pib1);
    printf("digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);
    printf("Digite o número da área: \n");
    scanf("%f", &area1);
    densipopulacional1 = populacao1 / area1; //Calcular Densidade Populacional NV
    pibpercapita1 = pib1 / (float)populacao1; //Nível Aventureiro

    //Sáida de dados da Densidade e Pib percapita

    printf("A densidade Populacional é: %.2f", densipopulacional1);
    printf("O pib percapita é: %.2f", pibpercapita1)

    //informações carta 2
    printf("Carta 2: \n");

    printf("digite o estado: \n");
    scanf("%s", &estado2);
    printf("digite o codigo da carta: \n");
    scanf("%s", &codigocarta2);
    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("digite a população: \n");
    scanf("%d", &populacao2);
    printf("digite a área: \n");
    scanf("%f", &area2);
    printf("digite o pib: \n");
    scanf("%f", &pib2);
    printf("digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos2);
    densipopulacional2 = populacao2 / area2 //Nível Aventureiro
    pibpercapita2 = pib2 / (float)populacao2 //NVba


    return 0;
}
