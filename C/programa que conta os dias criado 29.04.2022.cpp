criado em 28/04/2022

#include <stdio.h>

int main() 
{
   int diamenos;
   int dia;
   int valortotaldia;
   int mesmenos;
   int mes;
   int valortotalmes;
   int mesmult;
   int anomenos;
   int ano;
   int valorano; 
   int anomult;
  int resultadofinal;

   printf("Calcule quantos mês dias voce ja viveu! \n");
   printf("em qual dia estamos ? : ");
   scanf("%d" ,&diamenos);
   printf("em qual dia voce nasceu ? : ");
   scanf("%d" ,&dia);
   valortotaldia=diamenos-dia;
   printf("em qual mes estamos? : ");
   scanf("%d" ,&mesmenos);
   printf("em qual mes voce nasceu? : ");
   scanf("%d" ,&mes);
  valortotalmes=mesmenos-mes;
  mesmult=valortotalmes*30;
  printf("em qual ano estamos ? : ");
  scanf("%d" ,&anomenos);
  printf("em qual ano voce nasceu ? : ");
  scanf("%d" ,&ano);
  valorano=anomenos-ano;
  anomult=valorano*365;
  resultadofinal=valortotaldia+mesmult+anomult;
  printf("voce esta vivo no total de: %d dias" ,resultadofinal);
  

  return 0;
  }
       
