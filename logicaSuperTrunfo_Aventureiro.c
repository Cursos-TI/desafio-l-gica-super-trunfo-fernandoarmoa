#include <stdio.h>
/*
    Desafio Super Trunfo - Países
    Tema 2 - Comparação das Cartas
    Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    Siga os comentários para implementar cada parte do desafio.
    Implementar um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas
    Estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, 
    considerando regras específicas para cada atributo.
*/

int main() {

    // DECLARANDO E INICIALIZANDO DAS VARIÁVEIS
    char estado_carta1, estado_carta2;
    char cod_carta1[4], cod_carta2[4], cidade_carta1[20], cidade_carta2[20];
    char* atributos[10] = {"População", "Área", "PIB", "Pontos Turísticos", "PIB per Capita", "Densidade Populacional", "Super Poder"};

    int populacao_carta1, qtde_pontos_turistico_carta1, populacao_carta2, qtde_pontos_turistico_carta2;
    int resultado_carta1  = 0, resultado_carta2 = 0;
    int atributo_escolhido;

    float area_carta1, pib_carta1, area_carta2, pib_carta2;
    float densidade_populacional_carta1, densidade_populacional_carta2;
    float pib_perCapita_carta1, pib_perCapita_carta2;
    float densidade_inversa_carta1, densidade_inversa_carta2;
    float super_poder_carta1, super_poder_carta2;

    // INFORMAÇÕES PARA O USUÁRIO
    printf(" *** BENVINDO AO JOGO DE SUPER TRUNFO *** \n\n");
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    // LENDO OS DADOS INSERIDOS PELO USUÁRIO
    // DADOS DA CARTA 01
    printf("ENTRE COM OS DADOS DA CARTA 1\n");
    printf("Digite uma letra de 'A' à 'H' para representar o estado da carta: ");
    scanf(" %c", &estado_carta1);

    printf("Informação: o código da carta é composto da letra do estado, digitado acima, mais um número de 01 à 04 (Ex: A01, B03)\n");
    printf("Digite o codigo da carta: ");
    scanf(" %3s", cod_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %20s", cidade_carta1);

    printf("Entre com a número de habitantes desta cidade: ");
    scanf(" %d", &populacao_carta1);

    printf("Entre com a àrea da cidade (em Km²): ");
    scanf(" %f", &area_carta1);

    printf("Entre com o PIB (Produto Interno Bruto) da cidade: ");
    scanf(" %f", &pib_carta1);

    printf("Entre com a quantidade de Pontos Turísticos da cidade: ");
    scanf(" %d", &qtde_pontos_turistico_carta1);

    
    // DADOS DA CARTA 02
    printf("\nENTRE COM OS DADOS DA CARTA 2\n");
    printf("Digite uma letra de 'A' à 'H' para representar o estado da carta: ");
    scanf(" %c", &estado_carta2);

    printf("Informação: o código da carta é composto da letra do estado, digitado acima, mais um número de 01 à 04 (Ex: A01, B03)\n");
    printf("Digite o codigo da carta: ");
    scanf(" %3s", cod_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %20s", cidade_carta2);

    printf("Entre com a número de habitantes desta cidade: ");
    scanf("%d", &populacao_carta2);

    printf("Entre com a àrea da cidade (em Km²): ");
    scanf(" %f", &area_carta2);

    printf("Entre com o PIB (Produto Interno Bruto) da cidade: ");
    scanf(" %f", &pib_carta2);

    printf("Entre com a quantidade de Pontos Turísticos da cidade: ");
    scanf(" %d", &qtde_pontos_turistico_carta2);

    //Efetuando os cálculos de densidade populacional e pib per capita das cartas
    densidade_populacional_carta1 = (float)(populacao_carta1 / area_carta1);
    pib_perCapita_carta1 = (float)(pib_carta1 / populacao_carta1);

    densidade_populacional_carta2 = (float)(populacao_carta2/ area_carta2);
    pib_perCapita_carta2 = (float)(pib_carta2 / populacao_carta2);

    //Efetuando os cálculos da densidade populacional inversa das cartas
    densidade_inversa_carta1 = 1 / densidade_populacional_carta1;
    densidade_inversa_carta2 = 1 / densidade_populacional_carta2;

    //Efetuando o cálculo do Super Poder das cartas
    super_poder_carta1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + qtde_pontos_turistico_carta1 + pib_perCapita_carta1 + densidade_inversa_carta1;
    super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + qtde_pontos_turistico_carta2 + pib_perCapita_carta2 + densidade_inversa_carta2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // COMPARANDO O ATRAIBUTO POPULAÇÃO E MOSTRANDO O RESULTADO
    
    printf("\n\n -XXX- Comparação de cartas -XXX- \n\n");
    printf("Escolha um dos atributos abaixo:\n");
    printf("1 - População\t2 - Área\t3 - PIB\t4 - Pontos Turísticos\t5 - PIB per Capita\t6 - Densidade Populacional\t7 - Super Poder\n\n");
    scanf("%d", &atributo_escolhido);

    printf("A batalha será entre %s e %s, que vença a melhor!\n", cidade_carta1, cidade_carta2);
    printf("O atributo escolhido para comparação foi o(a): %s\n", atributos[atributo_escolhido - 1]);

    switch (atributo_escolhido)
    {
    case 1:
        printf("Carta 1 - %s: %d\n",atributos[atributo_escolhido - 1], populacao_carta1);
        printf("Carta 2 - %s: %d\n", atributos[atributo_escolhido - 1], populacao_carta2);
        if (populacao_carta1 == populacao_carta2) {
            printf("Batalha empatada!\n");
            printf("%s e %s tem a mesma %s!\n", cidade_carta1, cidade_carta2, atributos[atributo_escolhido - 1]);
        } else if (populacao_carta1 > populacao_carta2) {
            printf("Resultado: Carta 1 (%s) venceu.\n", cidade_carta1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu.\n", cidade_carta2);
        }
        break;
    
    case 2:
        printf("Carta 1 - %s: %.2f km²\n",atributos[atributo_escolhido - 1], area_carta1);
        printf("Carta 2 - %s: %.2f km²\n", atributos[atributo_escolhido - 1], area_carta1);
        if (area_carta1 == area_carta2) {
            printf("Batalha empatada!\n");
            printf("%s e %s tem a mesma %s!\n", cidade_carta1, cidade_carta2, atributos[atributo_escolhido - 1]);
        } else if (area_carta1 > area_carta2) {
            printf("Resultado: Carta 1 (%s) venceu.\n", cidade_carta1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu.\n", cidade_carta2);
        }
        break;

    case 3:
        printf("Carta 1 - %s: %.3f bilhões de reais\n",atributos[atributo_escolhido - 1], pib_carta1 / 1e9);
        printf("Carta 2 - %s: %.3f bilhões de reais\n", atributos[atributo_escolhido - 1], pib_carta2 / 1e9);
        if (pib_carta1 == pib_carta2) {
            printf("Batalha empatada!\n");
            printf("%s e %s tem o mesmo %s!\n", cidade_carta1, cidade_carta2, atributos[atributo_escolhido - 1]);
        } else if (pib_carta1 > pib_carta2) {
            printf("Resultado: Carta 1 (%s) venceu.\n", cidade_carta1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu.\n", cidade_carta2);
        }
        break;

    case 4:
        printf("Carta 1 - %s: %d\n",atributos[atributo_escolhido - 1], qtde_pontos_turistico_carta1);
        printf("Carta 2 - %s: %d\n", atributos[atributo_escolhido - 1], qtde_pontos_turistico_carta2);
        if (qtde_pontos_turistico_carta1 == qtde_pontos_turistico_carta2) {
            printf("Batalha empatada!\n");
            printf("%s e %s tem a mesma quantidade de %s!\n", cidade_carta1, cidade_carta2, atributos[atributo_escolhido - 1]);
        } else if (qtde_pontos_turistico_carta1 > qtde_pontos_turistico_carta2) {
            printf("Resultado: Carta 1 (%s) venceu.\n", cidade_carta1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu.\n", cidade_carta2);
        }
        break;

    case 5:
        printf("Carta 1 - %s: %.2f reais\n",atributos[atributo_escolhido - 1], pib_perCapita_carta1);
        printf("Carta 2 - %s: %.2f reais\n", atributos[atributo_escolhido - 1], pib_perCapita_carta2);
        if (pib_perCapita_carta1 == pib_perCapita_carta2) {
            printf("Batalha empatada!\n");
            printf("%s e %s tem o mesmo %s!\n", cidade_carta1, cidade_carta2, atributos[atributo_escolhido - 1]);
        } else if (pib_perCapita_carta1 > pib_perCapita_carta2) {
            printf("Resultado: Carta 1 (%s) venceu.\n", cidade_carta1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu.\n", cidade_carta2);
        }
        break;

    case 6:
        printf("Carta 1 - %s: %.2f hab/km²\n",atributos[atributo_escolhido - 1], densidade_populacional_carta1);
        printf("Carta 2 - %s: %.2f hab/km²\n", atributos[atributo_escolhido - 1], densidade_populacional_carta2);
        if (densidade_populacional_carta1 == densidade_populacional_carta2) {
            printf("Batalha empatada!\n");
            printf("%s e %s tem a mesma %s!\n", cidade_carta1, cidade_carta2, atributos[atributo_escolhido - 1]);
        } else if (densidade_populacional_carta1 < densidade_populacional_carta2) {
            printf("Resultado: Carta 1 (%s) venceu.\n", cidade_carta1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu.\n", cidade_carta2);
        }
        break;

    case 7:
        printf("Carta 1 - %s: %d\n",atributos[atributo_escolhido - 1], super_poder_carta1);
        printf("Carta 2 - %s: %d\n", atributos[atributo_escolhido - 1], super_poder_carta2);
        if (super_poder_carta1 == super_poder_carta2) {
            printf("Batalha empatada!\n");
            printf("%s e %s tem a mesma pontuação em %s!\n", cidade_carta1, cidade_carta2, atributos[atributo_escolhido - 1]);
        } else if (super_poder_carta1 > super_poder_carta2) {
            printf("Resultado: Carta 1 (%s) venceu.\n", cidade_carta1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu.\n", cidade_carta2);
        }
        break;

    default:
        break;
    }


    return 0;
}
