#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#define max 5

main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	bool palindromo=false;
	int numero, numeros[max],indice;
	bool achou=false;
	
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	printf("4 - Verificar se um vetor de tamanho par ou impar contem um conjunto de n�meros inteiros que ao ler, indiferentemente, da esquerda para a direita ou vice-versa � um pal�ndromo.");
	printf("\n-----------------------------------------------------------------------------------------------------\n");
	
	for(indice=0;indice<max;indice++){
	    printf("Insira um n�mero  ");
	    scanf("%d",&numeros[indice]);
	}
	for(indice=0;indice<max/2;indice++){
	    if(numeros[indice]!=numeros[max-1-indice]){
	    	palindromo=false;
	    	break;
		}else{
			palindromo=true;
		}
		
	}
	
	if(palindromo==true){
		printf("� palindromo");
	}else{
		printf("N�o � palindromo");
	}
	
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	for(indice=0;indice<max;indice++){
		printf(" [%d] = %d  |",indice+1,numeros[indice]);
	}
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	getch();
}
