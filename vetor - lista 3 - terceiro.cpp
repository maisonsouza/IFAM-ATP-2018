#include <iostream>
#define tam 5
using namespace std;

int main(){
	int numero, numeros[tam],soma=0,media=0;
	cout<<"3. Multiplicar os elementos do vetor por 10. O vetor � de tamanho 5 de n�mero reais.\n";
	
	for(numero=0;numero<tam;numero++){
		cout<<"V [" << numero << "] = ";
		cin >> numeros[numero];	
	}
	
	for(numero=0;numero<tam;numero++){
		numeros[numero] = numeros[numero] * 5;
		cout<<"  V [" << numero << "]  = " << numeros[numero] << " | ";
	}
}
