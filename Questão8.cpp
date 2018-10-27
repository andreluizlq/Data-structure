#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

//VARIÁVEIS:

int *v1, *v2;
int tamanho;
int *VT;


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

	void mostraVetor(int tamanho, int *vetor){
    	for(int i=0; i<tamanho; i++){
   			if (i==0) 
				cout<<"v=["<<vetor[i]<<",";
			else if(i<tamanho-1)
				cout << vetor[i] << ",";
			else
        		cout<<vetor[i]<<"]"<< endl;
   			}
		}

	int *vetorGrandao(int tamanho, int *vetor1, int *vetor2){
		
		int *v;
		int i = 0;
		int j = 0;
		
		v = geraVetor(tamanho*2, v);
		
		while(i < (tamanho*2)){
			v[j] = vetor1[i];
				j++;
			v[j] = vetor2[i];
				j++;
				i++;
		}
		mostraVetor(tamanho*2,v);
		cout << "foi";
		return v;
	}
int main(){

	cout << "Digite o tamanho dos vetores: ";
	cin >> tamanho;

	v1 = geraVetor(tamanho, v1);
	v2 = geraVetor(tamanho, v2);

	v1 = preencherVetor(tamanho, v1);
	v2 = preencherVetor(tamanho, v2);
	int *vetor;
	vetor = vetorGrandao(tamanho, v1, v2);
	cout<< "oi";
	
	return 0;
}
