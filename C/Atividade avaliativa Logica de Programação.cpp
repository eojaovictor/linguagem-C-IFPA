

//Atividade Lógica de Programação e algoritimo

//1) Primeira Questão

#include <stdio.h>
#include <stdio.h>
int main() {
int a,n;
n=0;
printf("Digite o valor de a: ");
scanf ("%d",&a);
while ( n <= a ) {
printf("%d \n",a);
a = a - 1;
}
return 0;
}

//2) Segunda Questão


#include <stdio.h>
#include <stdio.h>
int main() {
int a,n;
n=0;
printf("Digite o valor de a: ");
scanf ("%d",&a);
while ( n <= a ) {
printf("%d \n",a);
a = a - 1;
}
return 0;
}

//3) Terceira Questão

#include <stdio.h>
#include <stdio.h>
int main() {
int a,n;
a=3;
n=15;
printf("Os cinco primeiros multiplos de 3: \n");
while ( a <= n ) {
printf("%d \n",a);
a = a + 3;
}
return 0;
}


//4) Quarta QuestÃ£o

#include <stdio.h>

int main() {
int a,n;
a=10;
n=0;
printf ("Programa de contagem regressiva!! \n");
while (n <= a ) {
printf ("%d \n",a);
a = a - 1;
}
printf ("Fim");

return 0;
}

//5) Quinta questão
#include <stdio.h>
#include <stdlib.h>


int main() {
  int valor1;
  int valor2;
  int valor3;
  int valor4;
  int valor5;
  int soma;
  printf("Programa de soma! \n");
  printf("Digite o primeiro Valor : \n");
  scanf("%d",&valor1);
  printf("Digite o segundo Valor : \n");
  scanf("%d",&valor2);
  printf("Digite o Terceiro Valor : \n");
  scanf("%d",&valor3);
  printf("Digite o Quarto Valor : \n");
  scanf("%d",&valor4);
  printf("Digite o quinto Valor : \n");
  scanf("%d",&valor5);
  soma=valor1+valor2+valor3+valor4+valor5;
  printf("O resultado da soma é : %d", soma);
  return 0;
}
  