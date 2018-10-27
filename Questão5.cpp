#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
//VARIÁVEIS:

	int **M, n, m;

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
					cin>>matriz[i][j];
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

	void limpaMatriz(int linha, int coluna, int **matriz){
		for( int i=0; i<linha; i++){
			free(matriz[i]);
		}
	free(matriz);
	}

	int** transposta(int linha, int coluna, int **matriz){
		int** matrizT;
		matrizT = geraMatriz(coluna, linha, matrizT);
		for(int i=0; i<linha; i++){	
			for(int j=0; j<coluna; j++){
				matrizT[i][j] = matriz[j][i];
			}
		}
	return matrizT;		
	}

int main(){
	cout<<"Digite o tamanho da matriz:"<<endl;
	cin>> m;
	cin>> n;
	cout<<"Digitie os valores da matriz:"<<endl;
	M = geraMatriz (m, n, M);
	M = preencherMatriz (m, n, M);

	cout<<"A tranposta da Matriz e: "<<endl;
	M = transposta (m, n, M);
	mostrarMatriz (m, n, M);
	limpaMatriz (m, n, M);

	return 0;
}
