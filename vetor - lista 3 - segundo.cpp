#include <iostream>
#define tam 5
using namespace std;

main(){
	int numero, numeros[tam],soma=0,media=0;
	cout<<"2. Calcular a m�dia entre os valores de um vetor de tamanho 5 de n�meros reais.\n";
	
	for(numero=0;numero<tam;numero++){
		cout<<"V [" << numero << "] = ";
		cin>>numeros[numero];
		soma += numeros[numero];
	}
	
	media = soma/tam;
	cout<< "A soma dos valores do vetor = " << soma << ".\n";
	cout<< "A m�dia dos valores do vetor = " << media << ".\n";
}
