#include <stdio.h>

int main(){

    char estado, codigoCarta[5], cidade[20], estado2, codigoCarta2[5], cidade2[20];
    int população, pt, população2, pt2;
    float area, pib, area2, pib2, densidadepopulacional, densidadepopulacional2, pibcapita, pibcapita2;
    double superPoder01, superPoder02;
    

    //carta 01
    //cadastro do estado cidade 01
    printf("Insira os dados da Carta 01\n");
    printf("Estado (Letra de A a H): ");
    scanf("%c", &estado);

    //cadastro do codigo da carta cidade 01
    printf("digite o codigo da carta (Um número de 01 a 04): ");
    scanf("%s", codigoCarta);

    //cadastro do nome da cidade cidade 01
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    //cadastro da população da cidade cidade 01
    printf("Digite a população de %s: ", cidade);
    scanf("%d", &população);
    
    //cadastro da area da cidade cidade 01
    printf("Digite a área de %s em KM²: ", cidade);
    scanf("%f", &area);

    //cadastro do pib da cidade cidade 01
    printf("Digite o PIB em Bilhoes de reais: ");
    scanf("%f", &pib);

    //cadastro dos pontos turisticos cidade 01
    printf("Digite a quantidade de pontos turisticos de %s: ", cidade);
    scanf("%d", &pt);
    printf("\n");
    printf("\n");

    //calculo da densidade populacional carta 01
    densidadepopulacional = (float) população/area;

    //calculo do PIB per capital carta 01
    pibcapita = (float) (pib*1000000000)/população;

    //Carta 02
    printf("Insira os dados da Carta 02\n");
    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado2);

    //cadastro do codigo da carta cidade 02
    printf("digite o codigo da carta (Um número de 01 a 04): ");
    scanf("%s", codigoCarta2);

    //cadastro do nome da cidade cidade 02
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    //cadastro da população da cidade cidade 02
    printf("Digite a população de %s: ", cidade2);
    scanf("%d", &população2);

    //cadastro da area da cidade cidade 02
    printf("Digite a área de %s em KM²: ", cidade2);
    scanf("%f", &area2);

    //cadastro do pib da cidade cidade 02
    printf("Digite o PIB em Bilhoes de reais: ");
    scanf("%f", &pib2);

    //cadastro dos pontos turisticos cidade 02
    printf("Digite a quantidade de pontos turisticos de %s: ", cidade2);
    scanf("%d", &pt2);

    //calculo da densidade populacional carta 02
    densidadepopulacional2 = (float) população2/area2;

    //calculo do PIB per capital carta 02
    //transformando o valor do PIb em bilhoes para depois realizar o calculo do pib per capita
    pibcapita2 = (float) (pib2*1000000000)/população2;

    //calculo super poder carta 01
    superPoder01 = (float) população + area + pib + pt + pibcapita + (1/densidadepopulacional);

        //calculo super poder carta 02
    superPoder02 = (float) população2 + area2 + pib2 + pt2 + pibcapita2 + (1/densidadepopulacional2);

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
    printf("Numero de pontos turisticos %d\n", pt);
    printf("Densidade Populacional: %.2f hab/KM²\n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais\n", pibcapita);

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
    printf("Densidade Populacional: %.2fhab/KM²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);

    printf("\n");
    printf("\n");

    printf("COMPARAÇÃO DE CARTAS\n");
    printf("População: Carta 01 venceu (%d)\n", população > população2);
    printf("Área: carta 01 venceu (%d)\n", area > area2);
    printf("PIB: carta 01 venceu (%d)\n", pib > pib2);
    printf("pontos Turisticos: Carta 01 venceu (%d)\n", pt > pt2);
    printf("Densidade populacional: Carta 01 venceu (%d)\n", densidadepopulacional < densidadepopulacional2);
    printf("PIB per Capita: Carta 01 venceu (%d)\n", pibcapita > pibcapita2);
    printf("Super Poder: Carta 01 venceu (%d)\n", superPoder01 > superPoder02);
    


    //printo do valor do super poder
    //printf("O valor SP01: %.2f\n", superPoder01);
    //printf("O valor SP02: %.2f\n", superPoder02);

    return 0;


}