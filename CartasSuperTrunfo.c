#include <stdio.h>

int main(){

    char estado, codigoCarta[5], cidade[20], estado2, codigoCarta2[5], cidade2[20];
    int população, pt, população2, pt2;
    float area, pib, area2, pib2;

    //carta 01
    //cadastro do estado
    printf("Insira os dados da Carta 01\n");
    printf("Estado (Letra de A a H)): ");
    scanf("%c", &estado);

    //cadastro do codigo da carta
    printf("digite o codigo da carta (Um número de 01 a 04): ");
    scanf("%s", codigoCarta);

    //cadastro do nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    //cadastro da população da cidade
    printf("Digite a população de %s: ", cidade);
    scanf("%d", &população);
    
    //cadastro da area da cidade
    printf("Digite a área de %s em KM²: ", cidade);
    scanf("%f", &area);

    //cadastro do pib da cidade
    printf("Digite o PIB em Bilhoes de reais: ");
    scanf("%f", &pib);

    //cadastro dos pontos turisticos
    printf("Digite a quantidade de pontos turisticos de %s: ", cidade);
    scanf("%d", &pt);
    printf("\n");
    printf("\n");

    //Carta 02
    printf("Insira os dados da Carta 02\n");
    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado2);

    //cadastro do codigo da carta
    printf("digite o codigo da carta (Um número de 01 a 04): ");
    scanf("%s", codigoCarta2);

    //cadastro do nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    //cadastro da população da cidade
    printf("Digite a população de %s: ", cidade2);
    scanf("%d", &população2);

    //cadastro da area da cidade
    printf("Digite a área de %s em KM²: ", cidade2);
    scanf("%f", &area2);

    //cadastro do pib da cidade
    printf("Digite o PIB em Bilhoes de reais: ");
    scanf("%f", &pib2);

    //cadastro dos pontos turisticos
    printf("Digite a quantidade de pontos turisticos de %s: ", cidade2);
    scanf("%d", &pt2);
    printf("\n");
    printf("\n");

    //print da cidade 01
    printf("Carta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s%c\n", codigoCarta, estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %.2fKM²\n", area);
    printf("PIB: %.2f Bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos %d", pt);

    printf("\n");
    printf("\n");

    //print da cidade 02
    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s%c\n", codigoCarta2, estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2fKM²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos %d\n", pt2);

    return 0;


}