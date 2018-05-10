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
	printf("2 - Fa�a um algoritmo para preencher um vetor de tamanho 10 com valores aleat�rios. Solicite que o usu�rio\n digite um n�mero e pesquise se este n�mero no vetor. Como resultado, informe se encontrou ou n�o e quantos passos foram utilizados para procurar o elemento no vetor.");
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	
	for(indice=0;indice<10;indice++){
	    numeros[indice]=rand()%10;
	}
	
	printf("Digite um n�mero para pesquisar no vetor\n");
	scanf("%d",&numero);
	
	for(indice=0;indice<10;indice++){
		if(numeros[indice]==numero){
			passos=indice+1;
			achou=true;
		}
	}

	if(achou==false){
		printf("Esse n�mero n�o foi encontrado no vetor\n");
		passos=9;
	}else{
			printf("Encontramos o n�mero no vetor\n",indice+1);
	}
	printf("\nForam utilizados %d passos\n",passos);
	printf("\n---------------------------------------------------------------------------------------------------------------\n");	
	printf("VETOR GERADO COM N�MEROS ALEAT�RIOS");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	for(indice=0;indice<10;indice++){
	printf("  [%d] = %d  |",indice+1,numeros[indice]);
	}
	getch();
}
