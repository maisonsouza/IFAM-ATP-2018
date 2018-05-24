#include <iostream>
#include <cstdlib>
using namespace std;
#define max 100

int main(){
	int i, vetor[max], num,igual=0;
	
	for(i=0;i<max;i++){
	  vetor[i]	= 1 + rand()%9;
	}
	
	for(i=0;i<max/2;i++){
		if(vetor[i]==vetor[i+50]){
			igual++;
		}
	}
	
	cout << "Quantidade de Números iguais = " << igual;
	
}
