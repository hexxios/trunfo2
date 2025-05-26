#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char estado1, estado2;
  int nome1, nome2 ;
  unsigned long int pop1, pop2; 
  float area1, area2;
  float pib1, pib2;
  int turist1, turist2; 
  float dens1, dens2; 
  float pibcapt1, pibcapt2; 
  float poder1, poder2;
  
  
  printf (" Bem vindo ao Super Trunfo!\n");
  printf (" Insira os dados das suas cartas!\n");

  printf ("Estado de A a H : ");
  scanf (" %c", &estado1);

  printf ("Segundo estado de A a H : ");
  scanf (" %c", &estado2);


  printf("Agora digite o codigo da cidade usando um numero de 1 a 2; ");
  scanf (" %d", &nome1);

  printf("Agora digite o segundo código: ");
  scanf (" %d", &nome2);
  
  


  printf(" Muito bem! E qual é a população da cidade? digite: ");
  scanf(" %lu",&pop1);

  printf("E da segunda cidade? ");
  scanf(" %lu",&pop2);

  printf("Só mais alguns! Diga a área da sua cidade :");
  scanf(" %f", &area1);

  printf("E da segunda cidade? ");
  scanf(" %f", &area2);

  printf ("O pib da primeira: ");
  scanf(" %f",&pib1);

  printf("E da segunda cidade? ");
  scanf(" %f",&pib2);
  
  
  printf ("E agora pra finalizar! Quantos pontos turísticos tem a sua cidade? ");
  scanf(" %d",&turist1);
  
  printf("E da segunda ?");

  scanf(" %d",&turist2);


  dens1 = pop1 / area1 ;
  dens2 = pop2 / area2 ;

  pibcapt1 = pib1 / pop1;
  pibcapt2 = pib2 / pop2;
  
  poder1 = pop1 + area1 + pib1 + turist1 + dens1 + pibcapt1;
  poder2 = pop2 + area2 + pib2 + turist2 + dens2 + pibcapt2 ;


   printf (" Bem aqui estão os detalhes da sua cidade!");
   printf("Nome: %c\n", estado1);
   printf("Codigo: %c %d\n",estado1, nome1);
   printf("População: %lu\n", pop1);
   printf("Area : %f\n", area1);
   printf("Pib: %f\n", pib1);
   printf("PontosA Turisticos: %d\n", turist1);
   printf("Densidade Populacional: %f\n", dens1);
   printf("Pib per capta: %f\n", pibcapt1);  
   printf("Seu super poder: %d\n" , poder1);


   printf (" Bem aqui estão os detalhes da sua segunda cidade!");
   printf("Nome: %c\n", estado2);
   printf("Codigo: %c %d\n", estado2, nome2);
   printf("População: %lu\n", pop2);
   printf("Area : %f\n", area2);
   printf("Pib: %f\n", pib2);
   printf("Pontos Turisticos: %d\n", turist2);
   printf("Densidade Populacional: %f\n", dens2);
   printf("Pib per capta: %f\n", pibcapt2);
   printf("Seu super poder: %d\n" , poder2);

   int escolha;

    
    do {
   printf(" Agora vamos ver quem ganha!!\n                ");
   printf(" Escolha que atributos você quer comparar\n");
   printf("1- população\n");
   printf("2- Area\n");
   printf("3- PIB\n");
   printf("4- Pontos turísticos\n");
   printf("5- Densidade Populacional\n");
   printf("6- PIB per capta\n");
   printf("7- Super Poder!!!\n");
   printf("0 - Sair do menu\n");
   scanf("%d", &escolha);
    
   switch (escolha) {
     case 1: 
       printf("Você comparou População %lu contra %lu \n", pop1, pop2);
      if (pop1 > pop2) {
        printf(" Carta %c%d ganhou!", estado1, nome1);
      } else if (pop1 == pop2) {
        printf(" Carta %c%d e %c%d empataram! ",estado1 , nome1 , estado2, nome2);
      } 
        else {
        printf(" Carta %c%d ganhou!", estado2, nome2);
        }
      break;

      case 2: 
        printf("Você comparou a Area %f contra %f \n", area1, area2);
        if (area1 > area2) {

        printf(" Carta %c%d ganhou!", estado1, nome1);
      } else if (area1 == area2) {
        printf(" Carta %c%d e %c%d empataram! ",estado1 , nome1 , estado2, nome2);
      } 
        else {
        printf(" Carta %c%d ganhou!", estado2, nome2);
        }
      break;
    
    case 3: 
      printf("Você comparou o PIB %f contra %f \n", pib1, pib2);
      if (pib1 > pib2) {
        printf(" Carta %c%d ganhou!", estado1, nome1);
      } else if (pib1 == pib2) {
        printf(" Carta %c%d e %c%d empataram! ",estado1 , nome1 , estado2, nome2);
      } 
        else {
        printf(" Carta %c%d ganhou!", estado2, nome2);
        }
      break;

    case 4:
      printf("Você comparou os Pontos turisticos %d contra %d \n", turist1, turist2);
      if (turist1 > turist2) {
        printf(" Carta %c%d ganhou!", estado1, nome1);
      } else if (turist1 == turist2) {
        printf(" Carta %c%d e %c%d empataram! ",estado1 , nome1 , estado2, nome2);
      } 
        else {
        printf(" Carta %c%d ganhou!", estado2, nome2);
        }
      break;

    case 5:
      printf("Você comparou a Densidade Populacional %f contra %f \n", dens1, dens2);
      if (dens1 < dens2) {
        printf(" Carta %c%d ganhou!", estado1, nome1);
      } else if (dens1 == dens2) {
        printf(" Carta %c%d e %c%d empataram! ",estado1 , nome1 , estado2, nome2);
      } 
        else {
        printf(" Carta %c%d ganhou!", estado2, nome2);
        }
     break;


    case 6:
      printf("Você comparou o PIB per capta %f contra %f \n", pibcapt1, pibcapt2);
     if (pibcapt1 > pibcapt2) {
        printf(" Carta %c%d ganhou!", estado1, nome1);
      } else if (pibcapt1 == pibcapt2) {
        printf(" Carta %c%d e %c%d empataram! ",estado1 , nome1 , estado2, nome2);
      } 
        else {
        printf(" Carta %c%d ganhou!", estado2, nome2);
        }
      break;

     case 7:
      printf("Você comparou o PODER de %f contra %f \n", poder1, poder2);
     if (poder1 > poder2) {
        printf(" Carta %c%d ganhou!", estado1, nome1);
      } else if (poder1 == poder2) {
        printf(" Carta %c%d e %c%d empataram! ",estado1 , nome1 , estado2, nome2);
      } 
        else {
        printf(" Carta %c%d ganhou!", estado2, nome2);
        }
      break;
     
   };
     }while (escolha != 0);


   return 0 ;


}