#include <iostream>
#include <cstdlib>
using namespace std;
#define max 10

main(){
	int i,vet[max],soma=0,pontos=0;
	
	for(i=0;i<max;i++){
		vet[i]= 1 + rand()%20;
	}
	
	for(i=0;i<max;i++){
		soma = soma + vet[i];
	}

	cout << soma <<"\n";
	for(i=0;i<soma;i++){
		cout << ".";
		pontos++;
		if(pontos>=60){
			cout << "\n";
			pontos=0;
		}
	}
		
}
