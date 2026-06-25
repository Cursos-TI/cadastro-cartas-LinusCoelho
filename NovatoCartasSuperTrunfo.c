#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado; 
  char Cidade [10];
  int Populacao;
  float Pib;
  int Pontos_Turisticos;
  float Area;
  char Codigo_Carta [5];


  // Área para entrada de dados
  printf("Digite a letra do estado (A a H):\n");
  scanf(" %c", &Estado);

  printf("Digite uma cidade:\n");
  scanf("%s", Cidade);

  printf("Digite o código da carta:\n");
  scanf("%s", Codigo_Carta);

  printf("Qual o tamanho de sua população?\n");
  scanf("%d", &Populacao);

  printf("E qual o valor do seu Pib?\n");
  scanf("%f", &Pib);

  printf("Quantos pontos turisticos tem nessa cidade?\n");
  scanf("%d", &Pontos_Turisticos);

  printf("Qual o tamanho da Área dessa cidade\n");
  scanf("%f", &Area);

  // Área para exibição dos dados da cidade
  printf("\n=========================\n");
  printf("     Carta Cadastrada    \n");
  printf("=========================\n");
  printf("Estado: %c\n", Estado);
  printf("Cidade: %s\n", Cidade);
  printf("Código da Carta: %s\n", Codigo_Carta);
  printf("População: %d\n", Populacao);
  printf("Pib: %.2f M\n", Pib);
  printf("Área: %.2f km²\n", Area);
  printf("Pontos Turisticos: %d\n", Pontos_Turisticos);
  printf("=========================\n");

return 0;
} 
