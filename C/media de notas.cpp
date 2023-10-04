#include <stdio.h> 
#include <stdlib.h>
int main () 
{
float valor1;
 float valor2;
 float valor3;
 float valor4;
 float soma;
  float media;
  printf ("Programa que calcula a Média de notas\n\n");
  printf ("Valor da primeira nota: ");
  scanf ("%f",&valor1);
  printf ("Valor da segunda nota: ");
   scanf ("%f",&valor2);
  printf ("Valor da terceira nota: ");
   scanf ("%f",&valor3);
  printf ("Valor da quarta nota: ");
   scanf ("%f",&valor4);
  soma=valor1+valor2+valor3+valor4;
  media=soma/4;
 printf("A soma dos valores é igual a:%f\n\n",soma);
  printf("A media dos valores é igual a:%f\n\n",media);
  return 0;
  }
