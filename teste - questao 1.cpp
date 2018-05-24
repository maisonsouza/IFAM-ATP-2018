#include <iostream>
#define max 100
using namespace std;

int main(void){
	int i,vetor[max];
	cout<<"Digite o primeiro número";
	cin >> vetor[0];
	
	for(i=1;i<max;i++){
		if(i%2==0){
			vetor[i]= vetor[0]+2;
		}else{
			vetor[i] = vetor[0]-1;
		}
	}
	
	for(i=0;i<max;i++){
	 cout << i << " [" << vetor[i] << "] \n";
	}
}
