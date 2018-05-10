#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int numero, numeros[10],indice,passos=0;
	bool achou=false;
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	printf("2 - Faça um algoritmo para preencher um vetor de tamanho 10 com valores aleatórios. Solicite que o usuário\n digite um número e pesquise se este número no vetor. Como resultado, informe se encontrou ou não e quantos passos foram utilizados para procurar o elemento no vetor.");
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	
	for(indice=0;indice<10;indice++){
	    numeros[indice]=rand()%10;
	}
	
	printf("Digite um número para pesquisar no vetor\n");
	scanf("%d",&numero);
	
	for(indice=0;indice<10;indice++){
		if(numeros[indice]==numero){
			passos=indice+1;
			achou=true;
		}
	}

	if(achou==false){
		printf("Esse número não foi encontrado no vetor\n");
		passos=9;
	}else{
			printf("Encontramos o número no vetor\n",indice+1);
	}
	printf("\nForam utilizados %d passos\n",passos);
	printf("\n---------------------------------------------------------------------------------------------------------------\n");	
	printf("VETOR GERADO COM NÚMEROS ALEATÓRIOS");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	for(indice=0;indice<10;indice++){
	printf("  [%d] = %d  |",indice+1,numeros[indice]);
	}
	getch();
}
