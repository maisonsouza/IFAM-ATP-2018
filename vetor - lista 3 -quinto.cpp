#include <iostream>
#define tam 10
using namespace std;

int main(){
	int numero, numeros[tam],soma=0,media=0,linhas;
	cout<< "5 - Dado um vetor de tamanho 10 de inteiros. Preencha manual ou automaticamente os cinco primeiros elementos e replique esses cinco elementos para os outros cinco espaços do vetor dentro da mesma estrutura for.\n";
	
	for(numero=0;numero<5;numero++){
		cout<<"V [" << numero << "] = ";
		cin >> numeros[numero];	
	}
	
	for(numero=5;numero<tam;numero++){
		numeros[numero]= numeros[numero-5];
	}	
		
	for(numero=0;numero<tam;numero++){
		cout<<"V [" << numero << "] = " << numeros[numero] << " ";
	}	
	
}
