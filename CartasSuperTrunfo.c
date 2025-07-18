#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char cidade[100];
    int populacao;
    float area;
    int codigo;
    char estado[100];
    float pib;
    int turisticos;

    //especificadores utilizados em suas devidas funções para a impressão do que a variável solicita

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", & populacao);

    printf("Quantidade de pontos túristicos: \n");
    scanf("%d", &turisticos);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o código: \n");
    scanf("%d", &codigo);

//Dados refrentes a primeira carta, onde o printf tem a função de solicitar uma informação para o usuario e o scanf repaça os dados para a maquina 
    
    printf("primeira carta:\n");
    printf("estado: %s - cidade: %s \n", estado, cidade);
    printf("população: %d - pontos túristicos: %d \n", populacao, turisticos);
    printf("pib: %f - código: %d \n", pib, codigo);
    
    //informa o jogador com base as decisões do mesmo como fica a carta, sendo usado o printf para imprimir os referentes dados, as especificações e as strings para que o dado esteja correto
    
    char cidade[100];
    int populacao;
    float area;
    int codigo;
    char estado[100];
    float pib;
    int turisticos;

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", & populacao);

    printf("Quantidade de pontos túristicos: \n");
    scanf("%d", &turisticos);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o código: \n");
    scanf("%d", &codigo);

    printf("primeira carta:\n");
    printf("estado: %s - cidade: %s \n", estado, cidade);
    printf("população: %d - pontos túristicos: %d \n", populacao, turisticos);
    printf("pib: %f - código: %d \n", pib, codigo);

    return 0;
}
