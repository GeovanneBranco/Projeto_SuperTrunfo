#include <stdio.h>
#include <math.h>

int main () {

   int pop1, pop2, pt1, pt2, resultado;
   char codigo1[50],  codigo2[50], cidade1[50],cidade2[50];
   float area1, area2, pib1,  pib2;
   char estado1, estado2;



    // uma breve saudacao ao usuario dando uma breve instrucao de como deve seguir.
      printf(" Bem vindo ao SuperTrunfo Cidades - Vamos iniciar nosso jogo ! \n \n Abaixo Apresente corretamente as informacoes solicitadas das suas cartas: \n \n");

    // o usuario deve escrever os valores correspondentes da sua primeira  carta.//
     printf(" Digite a letra do estado correspondente a cidade da sua carta: ");
     scanf("%c", &estado1);

     printf(" Digite o codigo da sua primeira carta: ");
     scanf("%s", &codigo1);

     printf(" Digite o nome da cidade da sua primeira carta: ");
     scanf("%s", cidade1);

     printf(" Digite o valor da populacao da cidade em sua carta: ");
     scanf("%d", &pop1);

     printf(" Digite o valor de area em km² da cidade em sua carta: ");
     scanf("%f", &area1);

     printf(" Digite o valor de PIB da cidade da sua carta: ");
     scanf("%f", &pib1);

     printf(" Digite o numero de pontos turisticos da cidade em sua carta: ");
     scanf("%d", &pt1);

    // o usuario deve escrever os valores correspondentes da sua segunda carta.
     printf("\n Agora digite os valores correspondentes a sua segunda carta. \n \n");

     //limpeza de buffers.
     fflush(stdin);

    //inicia novamente a leitura de dados da segunda carta.
     printf(" Digite a letra do estado correspondente a cidade da sua carta: ");
     scanf("%c", &estado2);

     printf(" Digite o codigo da sua segunda carta: ");
     scanf("%s", &codigo2);

     printf(" Digite o nome da cidade da sua primeira carta: ");
     scanf("%s", cidade2);

     printf(" Digite o valor da populacao da cidade em sua carta: ");
     scanf("%d", &pop2);

     printf(" Digite o valor de Kms da cidade em sua carta: ");
     scanf("%f", &area2);

     printf(" Digite o valor de PIB da cidade da sua carta: ");
     scanf("%f", &pib2);

     printf(" Digite o numero de pontos turisticos da cidade em sua carta:");
     scanf("%d", &pt2);

     printf("\n\n");

     // calculo das variaveis Densidade e PIB per Capita.
     float densidade1 =  pop1 / area1;
     float densidade2 =  pop2 / area2; 
     double percap1 = (pib1 * pow( 10, 9)) / pop1 ;
     double percap2 = (pib2 * pow( 10, 9)) / pop2 ;

     // Apresentacao dos dados digitados pelo usuario da forma apropriada da sua primeira carta.//
     printf(" Carta 1: \n Estado: %c \n Codigo: %s \n Nome da cidade: %s \n Populacao: %d \n Area: %.2f Kms² \n PIB: %.2f bilhoes de reais \n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2lf reais \n"
     ,estado1, codigo1, cidade1, pop1, area1, pib1, pt1, densidade1, percap1);

     printf("\n \n");

     // Apresentacao dos dados digitados pelo usuario da forma apropriada pela segunda vez.
     printf(" Carta 2: \n Estado: %c \n Codigo: %s \n Nome da cidade: %s \n Populacao: %d \n Area: %.2f Kms² \n PIB: %.2f bilhoes de reais \n Numero de Pontos Turisticos: %d \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2lf reais \n",
     estado2, codigo2, cidade2, pop2, area2, pib2, pt2, densidade2, percap2);

     printf("\n\n");

     // Atribuindo o valor da soma a variavel SuperPoder sendo a densidade com valor invertido.
     
     float sp1 =  pop1 + area1 + pib1 + (-1 * densidade1) + percap1;
     float sp2 =  pop2 + area2 + pib2 + (-1 * densidade2) + percap2;

     // Comparativo das duas cartas para ver quem sera o vencedor em cada um dos valores apresentados.

     printf(" Comparacao de Cartas: \n");

     resultado = pop1 > pop2;
     printf(" Populacao: Carta 1 venceu %d \n", resultado);

     resultado = area1 > area2;
     printf( "area: Carta 1 venceu %d \n", resultado);

     resultado = pib1 > pib2;
     printf( "PIB: Carta 1 venceu %d \n", resultado);

     resultado = pop1 > pop2;
     printf( "Pontos Turisticos: Carta 1 venceu %d \n", resultado);

     resultado = densidade2 > densidade1;
     printf( "Densidade Populacional: Carta 2 venceu %d \n", resultado);

     resultado = percap1 > percap2;
     printf(" PIB per Capita: Carta 1 venceu %d \n", resultado);

     resultado =  sp1 > sp2;
     printf(" SuperPoder: Carta 1 venceu %d \n", resultado);
   
     return 0;
     }
