#include <iostream>
#define tam 5
using namespace std;

int main(){
	int numero, numeros[tam],soma=0,media=0,linhas;
	cout<< "4 - Imprimir na tela os elementos de um vetor de tamanho 5 e replicá-los em cinco novas linhas.\n";
	
	for(numero=0;numero<tam;numero++){
		cout<<"V [" << numero << "] = ";
		cin >> numeros[numero];	
	}
	
	for(linhas=1;linhas<=5;linhas++){
		for(numero=0;numero<tam;numero++){
			cout<<"|  V [" << numero << "]  = " << numeros[numero] << " | ";
		}	
		cout <<"\n";
	}
	
}
