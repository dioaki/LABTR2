#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int jogada, comp;
	char c;
	srand(time(NULL));
	
do{
	do{
  printf("\nPedra-papel e tesoura\n");
  printf("Digite '1' Pedra, '2' Papel, '3' Tesoura, '4' Lagarto ou '5' Spock\n");
  scanf("%d", &jogada);
}while(jogada!=0&&jogada!=1&&jogada!=2&&jogada!=3&&jogada!=4&&jogada!=5);

  comp = rand() % 5+1;
  printf("Computador escolheu: %d", comp);
  printf("\n");
  
  //vs
  if(jogada==1){
	  if(comp==1){
		  printf("PEDRA x PEDRA\n");
		  printf("EMPATOU");
	  }
	  if(comp==2){
		  printf("PEDRA x PAPEL\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	  if(comp==3){
		  printf("PEDRA x TESOURA\n");
		  printf("VOCE VENCEU");
	  }
	  if(comp==4){
		  printf("PEDRA x LAGARTO\n");
		  printf("VOCE VENCEU");
	  }
	  if(comp==5){
		  printf("PEDRA x SPOCK\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
  }

  if(jogada==2){
	  if(comp==1){
		  printf("PAPEL x PEDRA\n");
		  printf("VOCE VENCEU");
	  }
	  if(comp==2){
		  printf("PAPEL x PAPEL\n");
		  printf("EMPATOU");
	  }
	  if(comp==3){
		  printf("PAPEL x TESOURA\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	  if(comp==4){
		  printf("PAPEL x LAGARTO\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	  if(comp==5){
		  printf("PAPEL x SPOCK\n");
		  printf("VOCE VENCEU");
	  }
  }
  if(jogada==3){
	  if(comp==1){
		  printf("TESOURA x PEDRA\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	  if(comp==2){
		  printf("TESOURA x PAPEL\n");
		  printf("VOCE VENCEU");
	  }
	  if(comp==3){
		  printf("TESOURA x TESOURA\n");
		  printf("EMPATOU");
	  }
	   if(comp==4){
		  printf("TESOURA x LAGARTO\n");
		  printf("VOCE VENCEU");
	  }
	   if(comp==5){
		  printf("TESOURA x SPOCK\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
  }
    if(jogada==4){
	  if(comp==1){
		  printf("LAGARTO x PEDRA\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	  if(comp==2){
		  printf("LAGARTO x PAPEL\n");
		  printf("VOCE VENCEU");
	  }
	  if(comp==3){
		  printf("LAGARTO x TESOURA\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	   if(comp==4){
		  printf("LAGARTO x LAGARTO\n");
		  printf("EMPATOU");
	  }
	   if(comp==5){
		  printf("LAGARTO x SPOCK\n");
		  printf("VOCE VENCEU");
	  }
  }
   if(jogada==5){
	  if(comp==1){
		  printf("SPOCK x PEDRA\n");
		  printf("VOCE VENCEU");
	  }
	  if(comp==2){
		  printf("SPOCK x PAPEL\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	  if(comp==3){
		  printf("SPOCK x TESOURA\n");
		  printf("VOCE VENCEU");
	  }
	   if(comp==4){
		  printf("SPOCK x LAGARTO\n");
		  printf("VITORIA DO COMPUTADOR");
	  }
	   if(comp==5){
		  printf("SPOCK x SPOCK\n");
		  printf("EMPATOU");
	  }
  }
  printf("\n");
  printf("\nDeseja jogar novamente? Sim 's' ou nao 'n'\n");
  fflush(stdin);
  scanf("%c",&c);
}while(c=='s');
}
