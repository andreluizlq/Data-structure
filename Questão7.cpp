#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

//VARIÁVEIS:

int *V,n;
int x;

//FUNÇOES:

	int *geraVetor (int tamanho, int *vetor){
		for (int i=0; i<tamanho; i++){
			vetor = (int*)malloc(tamanho*sizeof(int));
		}
		return vetor;
	}

	int *preencherVetor (int tamanho, int *vetor){
			for(int i=0; i<tamanho; i++){
				cout<<"Digite a posicao "<<i+1<<" do vetor"<<endl;
				cin>>vetor[i];
				system("cls");
			}
	return vetor;
	}

void mostraVetor(int tam, int *vetor){
    for(int i=0; i<tam; i++){
    if (i==0) 
		cout<<"v=["<<vetor[i]<<",";
	else if(i<n-1)
		cout << vetor[i] << ",";
	else
        cout<<vetor[i]<<"]"<< endl;
    }
}
			
	void achaVetor(int tamanho, int *vetor){
		int posicao = 0;
		int encontra = 0;
		for(int i=0; i<tamanho; i++){
			if(vetor[i] == x){
				posicao = i+1;
				encontra = 1;
				cout<<"O numero "<<x<<" esta na posicao "<<posicao<<" do vetor."<<endl;
			}
			}
			if(encontra == 0){
				cout<<"NUMERO NAO ENCONTRADO..."<<endl;
		}
	}


int main(){
	
	system("color 0a");

	cout<<"Digite o tamanho do vetor: "<<endl;
	cin>> n;
	V = geraVetor (n, V);
	V = preencherVetor (n, V);
	system("cls");

	cout<<"Digite o numero que voce quer achar no vetor: "<<endl;
	cin>> x;
	system("cls");
	achaVetor (n, V);
	mostraVetor (n, V);
	free(V);

	return 0;
}
