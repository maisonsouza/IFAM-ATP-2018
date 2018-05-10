#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int numero, numeros[10],indice,posicaomaior,posicaomenor,maior=0,menor=1000;
	bool achou=false;
	
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	printf("3 - Percorrendo o vetor uma única vez, determine o menor e o maior elemento do vetor, e as posições em que ocorrem.");
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	
	for(indice=0;indice<10;indice++){
	    numeros[indice]=rand()%10;
	}
	
	for(indice=0;indice<10;indice++){
	    if(numeros[indice]>maior){
	    	maior=numeros[indice];
	    	posicaomaior=indice+1;
		}
		if(numeros[indice]<menor){
			menor=numeros[indice];
			posicaomenor=indice+1;
		}
	}
	printf("VETOR GERADO COM NÚMEROS ALEATÓRIOS");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	
	for(indice=0;indice<10;indice++){
		printf(" [%d] = %d  |",indice+1,numeros[indice]);
	}
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	printf("  Maior = %d| está na posicao %d|\n",maior,posicaomaior);
	printf("  Menor = %d| está na posicao %d|\n",menor,posicaomenor);
	getch();
	
}
