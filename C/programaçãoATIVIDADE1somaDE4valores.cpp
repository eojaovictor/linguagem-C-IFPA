#include <stdio.h> 
#include <stdlib.h>
int main () 
{
 int valor1;
 int valor2;
 int valor3;
 int valor4;
 int soma;
 printf("Propgrama que multiplica Valores\n\n");
 printf("Entre com o primeiro valor: ");
 scanf("%d" ,&valor1);
 printf("Entre com o Segundo valor: ");
 scanf("%d",&valor2);
 printf("Entre com o Terceiro valor: ");
 scanf("%d",&valor3);
 printf("Entre com o Quarto valor: ");
 scanf("%d",&valor4);
 soma=valor1*valor2*valor3*valor4;
 printf("A soma dos valores é igual a:%d\n\n",soma);
  return 0;
}
