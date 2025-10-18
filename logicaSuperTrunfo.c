#include <stdio.h>

int main() {

    char estado1 = 'A', estado2 = 'B';                        // Letra de "A" a "H"
    char codigo1[10] = "A01", codigo2[10] = "B02";            // A1 B2
    char cidade1[50] = "Fraiburgo", cidade2[50] = "Caçador";  // Nome da cidade escolhida
    int populacao1 = 64063, populacao2 = 76298;               // Nº de habitantes
    float area1 = 549.188, area2 = 983.424;                   // Area da cidade em Km2
    float pib1 = 130000000, pib2 = 470000000;                 // Produto Interno Bruto da cidade
    int turismo1 = 15, turismo2 = 20;                         // Quantidade de pontos turisticos
    float pibpercapta1, pibpercapta2;                         // Calculo do pib per capta
    float densidadepop1, densidadepop2;                       // Calculo da densidade populacional

  //CALCULOS PIB PER CAPTA E DENSIDADE POPULACIONAL
    
   pibpercapta1 = pib1 / populacao1;
   densidadepop1= populacao1 / area1;

   pibpercapta2 = pib2 / populacao2;
   densidadepop2 = populacao2 / area2; 



    //EXIBIÇÃO DA CARTA 01

printf("\n");                       //Apenas para pular uma linha
printf("-----CARTA 01-----\n");
printf("Código: %s\n", codigo1);
printf("Estado: %c\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Habitantes: %d\n", populacao1);
printf("Extensão: %.2fKm²\n", area1);
printf("PIB: %.2f Bilhões\n", pib1);
printf("Pontos turísticos: %d\n", turismo1);
printf("Densidade populacional: %.2f\n", densidadepop1);
printf("PIB per capta: %.2f\n", pibpercapta1);
printf("-------------------\n");



    //EXIBIÇÃO DA CARTA 02

printf("\n");                       //Apenas para pular uma linha
printf("-----CARTA 02-----\n");
printf("Código: %s\n", codigo2);
printf("Estado: %c\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Habitantes: %d\n", populacao2);
printf("Extensão: %.2fKm²\n", area2);
printf("PIB: %.2f Bilhões\n", pib2);
printf("Pontos turísticos: %d\n", turismo2);
printf("Densidade populacional: %.2f\n", densidadepop2);
printf("PIB per capta: %.2f\n", pibpercapta2);
printf("-------------------\n");

                          //COMPARAR AS DUAS CARTAS

printf("Comparação de cartas:\n PIB per Capta:\n\n");
    if(pibpercapta1 > pibpercapta2){
        printf("Carta A01 Ganhou! PIB: %.2f\n", pibpercapta1);
    } else {
        printf("Carta B02 Ganhou! PIB: %.2f\n", pibpercapta2);
    }
printf("Habitantes: \n\n");
    if(populacao1 > populacao2){
        printf("Carta A01 Ganhou! Habitantes: %d\n", populacao1);
    } else {
        printf("Carta B02 Ganhou! Habitantes: %d\n", populacao2);
    }
        return 0;
    }


