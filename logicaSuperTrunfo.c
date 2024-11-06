#include <stdio.h>

void regras();
void comparacaoPopulacaoePib(float populacao1, float populacao2, float pib1, float pib2);
void comparacaoDensidadePopulacionalePibpercapita(float populacao1, float populacao2, float pib1, float pib2, float area1, float area2);
void comparacaoPontosTuristicoseArea(int pontosTuristicos1, int pontosTuristicos2, float area1, float area2);


int main()
{

    unsigned int spottourist, spottourist_2, opcao, escolhaGame;
    char cityName[50], charterCode[10], charterState[10], cityName_2[50], charterCode_2[10], charterState_2[10];
    float area, pib, population, area_2, pib_2, population_2;

    printf("Seja bem vindo, antes de começar o jogo, primeiramente cadastre as cartas\n\n");

    printf("\nDigite o estado da primeira carta: ");
    fgets(charterState, 10, stdin);
    
    printf("\nDigite o código da primeira carta: ");
    fgets(charterCode, 10, stdin);


    printf("\nDigite o nome da primeira cidade: ");
    fgets(cityName, 50, stdin);

    printf("\nDigita a população da primeira cidade: ");
    scanf("%f", &population);
    getchar();

    printf("\nDigite o PIB da primeira cidade: ");
    scanf("%f", &pib);
    getchar();

    printf("\nQuantos pontos turisticos tem a primeira cidade? ");
    scanf("%d", &spottourist);
    getchar();

    printf("\nDigite a área da primeira cidade: ");
    scanf("%f", &area);
    getchar();

    printf("\nDigite o estado da segunda carta: ");
    fgets(charterState_2, 10, stdin);
    
    printf("\nDigite o código da segunda carta: ");
    fgets(charterCode_2, 10, stdin);


    printf("\nDigite o nome da segunda cidade: ");
    fgets(cityName_2, 50, stdin);

    printf("\nDigita a população da segunda cidade. ");
    scanf("%f", &population_2);
    getchar();

    printf("\nDigite o PIB da segunda cidade: ");
    scanf("%f", &pib_2);
    getchar();

    printf("\nQuantos pontos turisticos tem a segunda cidade? ");
    scanf("%d", &spottourist_2);
    getchar();

    printf("\nDigite a área da segunda cidade: ");
    scanf("%f", &area_2);
    getchar();
    
    
    printf(" Menu Principal\n 1 - Jogar\n 2 - Ver Regras\n 3 - Sair\n Digite a opção desejada: ");
    scanf("%d", &opcao);
    printf("Opção escolhida: %d\n", opcao);
    getchar();




    switch (opcao)
    {
    case 1:
        printf("\n \n \nEscolhar qual tipo de comparação deseja fazer:\n 1- População e PIB\n 2- Densidade Populacional e PIB per capita\n 3- Pontos turisticos e área\n");
        scanf("%d", &escolhaGame);
        getchar();
        
        if (escolhaGame == 1){
            comparacaoPopulacaoePib(population, population_2, pib, pib_2);
        } else if (escolhaGame == 2){
            comparacaoDensidadePopulacionalePibpercapita(population, population_2, pib, pib_2, area, area_2);
        } else if (escolhaGame == 3){
            comparacaoPontosTuristicoseArea(spottourist, spottourist_2, area, area_2);
        } else {
            printf("Opção inválida\n");
        }    
        break;
    case 2:
        regras();
        break;
    case 3:
        printf("Saindo do jogo\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    return 0;
    
};


void regras(){
    printf("Regras do jogo\n");
    printf("1 - Cada carta possui um estado, uma cidade, um código, população, PIB, pontos turisticos e área.\n");
    printf("2 - Cada carta duelará com outra carta, e o vencedor será aquele que tiver o maior valor em cada um dos atributos.\n");
    printf("3 - O vencedor será aquele que tiver o maior valor em cada um dos atributos.\n");
    printf("4 - Se houver empate em algum atributo, o vencedor será aquele que tiver o maior valor no atributo de desempate.\n");
    printf("5 - Se houver empate em todos os atributos, o duelo será considerado empate.\n");
};


void comparacaoPopulacaoePib(float populacao1, float populacao2, float pib1, float pib2){
    
    if (populacao1 > populacao2 && pib1 > pib2){
        printf("Vencedor: Carta 1\n");
    } else if (populacao1 < populacao2 && pib1 < pib2){
        printf("Vencedor: Carta 2\n");
    } else {
        printf("Empate\n");
    
    }
};


void comparacaoDensidadePopulacionalePibpercapita(float populacao1, float populacao2, float pib1, float pib2, float area1, float area2){
    
    float densidadePopulacional1, densidadePopulacional2, pibpercapita1, pibpercapita2;
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    if (densidadePopulacional1 > densidadePopulacional2 && pibpercapita1 > pibpercapita2){
        printf("Vencedor: Carta 1\n");
    } else if (densidadePopulacional1 < densidadePopulacional2 && pibpercapita1 < pibpercapita2){
        printf("Vencedor: Carta 2\n");
    } else {
        printf("Empate\n");    
    }

};


void comparacaoPontosTuristicoseArea(int pontosTuristicos1, int pontosTuristicos2, float area1, float area2){
    if (pontosTuristicos1 > pontosTuristicos2 && area1 > area2){
        printf("Vencedor: Carta 1\n");
    } else if (pontosTuristicos1 < pontosTuristicos2 && area1 < area2){
        printf("Vencedor: Carta 2\n");
    } else {
        printf("Empate\n");    
    }
};