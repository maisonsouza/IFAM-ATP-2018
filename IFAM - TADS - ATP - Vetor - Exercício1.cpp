#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

main(){
	setlocale(LC_ALL,"");
	int precosdecusto[5],precosdevenda[5],indice,precocusto=0,precovenda=0, prejuizo=0, lucro=0,saldo=0;
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	printf("1. Faça um algoritmo para preencher dois vetores de tamanho 5. Um com o preço de custo e o outro com\n o preço de venda. Mostre na tela se houve lucro, prejuízo ou movimentação nula.");
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	
	for(indice=0;indice<5;indice++){
		printf("\nDigite o preco de custo %d = ",indice+1);
		scanf("%d",&precocusto);
		precosdecusto[indice] = precocusto;
	}
	
		printf("\n-----------------------------------------------------------------------------------------------------\n");
	
	for(indice=0;indice<5;indice++){
		printf("\nDigite o preco de venda %d = ",indice+1);
		scanf("%d",&precovenda);
		precosdevenda[indice] = precovenda;
	}
	
	for(indice=0;indice<5;indice++){
		if(precosdecusto[indice] > precosdevenda[indice]){
			prejuizo = prejuizo + (precosdecusto[indice] - precosdevenda[indice]); 		
		}else{
			lucro = lucro + (precosdevenda[indice] - precosdecusto[indice]);
		}				
	}
	
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	for(indice=0;indice<5;indice++){
		printf("  Custo [%d] = %d  |",indice+1,precosdecusto[indice]);
	}
	
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	for(indice=0;indice<5;indice++){
		printf("  Venda [%d] = %d  |",indice+1,precosdevenda[indice]);
	}
	
	printf("\n-----------------------------------------------------------------------------------------------------\n");
    saldo = lucro - prejuizo;
	if(saldo==0){
		printf("\nMovimentação nula");
	}
	if(saldo>0){
		printf("\nLucro = %d",saldo);
	}if(saldo<0){
		printf("\nPrejuízo = %d",saldo);
	}
	getch();
}
