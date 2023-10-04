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

   printf("Calcule quantos mes dias voce ja viveu! \n");
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





  -----------------------------------------------------------------------------
  ATUALIZADO
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
  int idade;
  char diab;
   printf("Calcule quantos mes dias voce ja viveu! \n");
   printf("qual sua idade ? : ");
   scanf("%d" ,&idade);
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
  diab=idade/4;
  valorano=anomenos-ano;
  anomult=valorano*365;
  resultadofinal=valortotaldia+mesmult+anomult+diab;
  printf("voce esta vivo no total de: %d dias" ,resultadofinal);
  

  return 0;
  }
   
    -------------------------------------------------------------------------------
	ATUALIZADO 2.0
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
  int idade;
  int diab;
  int final;
   printf("Calcule quantos mes dias voce ja viveu! \n");
   printf("qual sua idade ? : ");
   scanf("%d" ,&idade);
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
  if (idade==12){
  diab=idade+3;
    }
  if (idade==13){
  diab=idade+3;
    }
  if (idade==14){
  diab=idade+3;
    }
  if (idade==15){
  diab=idade/3;
    }
  if (idade==16){
  diab=idade/4;
    }
  if (idade==17){
  diab=idade/4;
    }
  if (idade==18){
  diab=idade/4;
    }
  if (idade==19){
  diab=idade/4;
    }
  if (idade==20){
  diab=idade/4;
    }
  if (idade==21){
  diab=idade/4;
    }
  if (idade==33){
  diab=idade/4;
  diab=diab+2;
    }
  if (idade==34){
  diab=idade/3;
    }
  if (idade==35){
  diab=idade/3;
    }
  valorano=anomenos-ano;
  anomult=valorano*365;
  resultadofinal=valortotaldia+mesmult+anomult+diab;
  printf("voce esta vivo no total de: %d dias\n" ,resultadofinal);

printf("Para continuar digite 1\n Para sair digite 2\n");
scanf("%d",&final);
if (final==1){
	printf("qual sua idade ? : ");
   scanf("%d" ,&idade);
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
  if (idade==12){
  diab=idade+3;
    }
  if (idade==13){
  diab=idade+3;
    }
  if (idade==14){
  diab=idade+3;
    }
  if (idade==15){
  diab=idade/3;
    }
  if (idade==16){
  diab=idade/4;
    }
  if (idade==17){
  diab=idade/4;
    }
  if (idade==18){
  diab=idade/4;
    }
  if (idade==19){
  diab=idade/4;
    }
  if (idade==20){
  diab=idade/4;
    }
  if (idade==21){
  diab=idade/4;
    }
  if (idade==33){
  diab=idade/4;
  diab=diab+2;
    }
  if (idade==34){
  diab=idade/3;
    }
  if (idade==35){
  diab=idade/3;
    }
}
else 
printf ("Obrigado por jogar !")
  return 0;
  }
    ---------------------------------------------------------------------
    ATUALIZADO FINALIZAÇÃO 3.0
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
  int idade;
  int diab;
  int final;
  
  
   printf("Calcule quantos dias voce ja viveu! \n");
    printf("_______________________________________________\n");
   printf("qual sua idade ? : ");
   scanf("%d" ,&idade);
   printf("_______________________________________________\n");
   printf("em qual dia estamos ? : ");
   scanf("%d" ,&diamenos);
   printf("_______________________________________________\n");
   printf("em qual dia voce nasceu ? : ");
   scanf("%d" ,&dia);
   printf("_______________________________________________\n");
   valortotaldia=diamenos-dia;
   printf("em qual mes estamos? : ");
   scanf("%d" ,&mesmenos);
   printf("_______________________________________________\n");
   printf("em qual mes voce nasceu? : ");
   scanf("%d" ,&mes);
   printf("_______________________________________________\n");
  valortotalmes=mesmenos-mes;
  mesmult=valortotalmes*30;
  printf("em qual ano estamos ? : ");
  scanf("%d" ,&anomenos);
  printf("_______________________________________________\n");
  printf("em qual ano voce nasceu ? : ");
  scanf("%d" ,&ano); 
  printf("_______________________________________________\n");
  
  
  if (idade==12){
  diab=idade+3;
    }
  if (idade==13){
  diab=idade+3;
    }
  if (idade==14){
  diab=idade+3;
    }
  if (idade==15){
  diab=idade/3;
    }
  if (idade==16){
  diab=idade/4;
    }
  if (idade==17){
  diab=idade/4;
    }
  if (idade==18){
  diab=idade/4;
    }
  if (idade==19){
  diab=idade/4;
    }
  if (idade==20){
  diab=idade/4;
    }
  if (idade==21){
  diab=idade/4;
    }
  if (idade==33){
  diab=idade/4;
  diab=diab+2;
    }
  if (idade==34){
  diab=idade/3;
    }
  if (idade==35){
  diab=idade/3;
    }
    
    
  valorano=anomenos-ano;
  anomult=valorano*365;
  resultadofinal=valortotaldia+mesmult+anomult+diab;
  printf("voce esta vivo a %d dias\n" ,resultadofinal);
  printf("_______________________________________________\n");


printf("Para CONTINUAR digite 1 \n Para SAIR digite 2 \n");
scanf("%d",&final);
if (final==1){
	
	
	 printf("Calcule quantos dias voce ja viveu! \n");
    printf("_______________________________________________\n");
   printf("qual sua idade ? : ");
   scanf("%d" ,&idade);
   printf("_______________________________________________\n");
   printf("em qual dia estamos ? : ");
   scanf("%d" ,&diamenos);
   printf("_______________________________________________\n");
   printf("em qual dia voce nasceu ? : ");
   scanf("%d" ,&dia);
   printf("_______________________________________________\n");
   valortotaldia=diamenos-dia;
   printf("em qual mes estamos? : ");
   scanf("%d" ,&mesmenos);
   printf("_______________________________________________\n");
   printf("em qual mes voce nasceu? : ");
   scanf("%d" ,&mes);
   printf("_______________________________________________\n");
  valortotalmes=mesmenos-mes;
  mesmult=valortotalmes*30;
  printf("em qual ano estamos ? : ");
  scanf("%d" ,&anomenos);
  printf("_______________________________________________\n");
  printf("em qual ano voce nasceu ? : ");
  scanf("%d" ,&ano); 
  printf("_______________________________________________\n");
  
  
  if (idade==12){
  diab=idade+3;
    }
  if (idade==13){
  diab=idade+3;
    }
  if (idade==14){
  diab=idade+3;
    }
  if (idade==15){
  diab=idade/3;
    }
  if (idade==16){
  diab=idade/4;
    }
  if (idade==17){
  diab=idade/4;
    }
  if (idade==18){
  diab=idade/4;
    }
  if (idade==19){
  diab=idade/4;
    }
  if (idade==20){
  diab=idade/4;
    }
  if (idade==21){
  diab=idade/4;
    }
  if (idade==33){
  diab=idade/4;
  diab=diab+2;
    }
  if (idade==34){
  diab=idade/3;
    }
  if (idade==35){
  diab=idade/3;
    
    
  valorano=anomenos-ano;
  anomult=valorano*365;
  resultadofinal=valortotaldia+mesmult+anomult+diab;
  printf("voce esta vivo no total de: %d dias\n" ,resultadofinal);
  }
else 
printf ("OBRIGADO POR JOGAR!");
 return 0;
 
}}
