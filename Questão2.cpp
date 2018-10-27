#include <iostream>
#include <stdlib.h>
using namespace std;

//VARIAVEIS:
	
	int maiorN = 0;
	int *V,n;
	int valor = 0;

//FUNÇÕES:

	int *GerarVetor(int *vetor, int tam){
		vetor=(int*)malloc(n*sizeof(int));
		return vetor;
	}

	int *EntraVetor ( int *vetor, int tam){
	for(int i = 0; i < tam; i++){

		cout<<"Digite o valor da posicao "<<i+1<<": ";
		cin>> valor;

		if(valor > 0){
		vetor[i] = valor;
		}
		else{
		cout<< "O vetor so aceita numeros positivos!" <<endl; 
		i--;
		}
	}
	}

	int MaiorNumero(int *vetor, int tam){
		int maior = vetor[0];
		for(int i=0; i<=n; i++){
			if (vetor[i]>maior){
				maior = vetor[i];
			} 
		}
		return maior;
	}
	
int main(){
system("color f4");

//ENTRADAS:

	cout<<"Informe o tamanho do vetor: "<<endl;
	cin>>n;

	V = GerarVetor(V, n);
	V = EntraVetor(V, n);
	maiorN = MaiorNumero(V, n);

//SAÍDAS:

	cout<<maiorN<<endl;
	free(V);

	return 0;
}
