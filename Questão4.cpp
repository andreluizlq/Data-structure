#include <iostream>
#include <stdlib.h>

using namespace std;

//VARIAVEIS:

	int n,**M;
	int maior;


//FUNÇÕES:

	int **geraMatriz (int linha, int coluna, int **matriz){
		for (int i=0; i<linha; i++){
			matriz = (int**)malloc(linha*sizeof(int));
			for(int j=0; j<coluna; j++){
				matriz[j] = (int*)malloc(coluna*sizeof(int));
			}
		}
		return matriz;
	}

	int **preencherMatriz (int linha, int coluna, int **matriz){
		int valor;
		for(int i=0; i<linha; i++){
			for(int j=0; j<coluna; j++){
				cout<<"Elemento da matriz na posicao "<<"["<<i+1<<"]"<<"["<<j+1<<"]:"<<endl;
				cin>>valor;
				if(valor>0){
					matriz[i][j] = valor;
				}
				else{
					cout<<"A matriz nao aceita numeros negativos!"<<endl;
					j--;
				}
				system("cls");
			}
		}
	return matriz;
	}

	void mostrarMatriz(int linha, int coluna, int **matriz){
		for(int i=0; i<linha; i++){
				cout<<"[";
			for(int j=0; j<coluna; j++){
				if(j < coluna-1){
					cout<< matriz[i][j]<<",";
				}else{
				cout<<matriz[i][j];
				}
			}
	cout<< "]"<<endl;
		}
    }

	void maiorValor(int linha, int coluna, int **matriz){
		maior = matriz[0][0];
		for( int i=0; i<linha; i++){
			for(int j=0; j<coluna; j++){
				if(matriz[i][j] >= maior){
					maior = matriz[i][j];
				}
			}
		}
		cout<<endl;
		cout<<"O maior numero na matriz e: "<<maior<<endl;
	}
	
	void limpaMatriz(int linha, int coluna, int **matriz){
		for( int i=0; i<linha; i++){
			free(matriz[i]);
		}
		free(matriz);
	}

	

int main(){
	system("color 0a");
	
	cout<<"Qual o tamanho da matriz?"<<endl;
	cin>> n;
	
	M = geraMatriz (n, n, M);
	M = preencherMatriz (n, n, M);
	mostrarMatriz (n, n, M);
	maiorValor (n, n, M);
	limpaMatriz (n, n, M);
	
	return 0;
}
