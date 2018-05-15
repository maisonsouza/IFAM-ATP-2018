#include <iostream>
using namespace std;

main(){
	int numero, numeros[5],soma=0;
	cout<<"1. Somar os elementos de um vetor de tamanho 5 de inteiros\n";
	
	for(numero=0;numero<5;numero++){
		cout<<"V [" << numero << "] = ";
		cin>>numeros[numero];
		soma += numeros[numero];
	}
	
	cout<< "A soma dos valores do vetor = " << soma;
}
