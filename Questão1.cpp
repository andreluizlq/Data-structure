#include <iostream>

using namespace std;

//FUNÇÕES:

int *gerarVetor(int *vetor, int tam){
	vetor = (int*)malloc(n*sizeof(int));

	return vetor; 
}

void preencherVetor(int *vetor, int tam){
	for(int i=0; i<tam; i++){
		cin>>vetor[i];
	}
}

int maiorNumero(int *vetor, int tam){
	int maior = vetor[0];
	for(int i=0; i<=tam; i++){
		if (vetor[i]>maior){
			maior = vetor[i];
		} 
	}
	return maior;
}

int menorNumero(int *vetor, int tam){
	int menor = vetor[0];
	for(int i=0; i>=tam; i++){
		if (vetor[i]<menor){
			menor = vetor[i];
		}
	}
	return menor;
}



int main(){

//VARIAVEIS:
int tamanhoVetor;
int *V;
int maior;
int menor;

//ENTRADA:
cout<<"informe o tamanho do vetor: "<<endl;
cin>>tamanhoVetor;
 
V = gerarVetor(tamanhoVetor, V);
maior = maiorNumero(V, tamanhoVetor);
preencherVetor(tamanhoVetor, V);
menor = menorNumero(V, tamanhoVetor);

//SAÍDAS:
cout<< menor <<endl;
cout<< maior <<endl;

	return 0;
}

