#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

//VARIÁVEIS:

	int **M1, **M2, **MP, n1, m1, n2, m2;

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

    int **multMatriz(int **M1, int **M2, int **MP){
    	for(int i=0; i<n1; i++){
    		for(int j=0; j<m1; j++){
    			for(int k=0; k<m2; k++){
    				MP[i][k]=M1[i][j]*M2[j][k];
    			} 
    		}
		}
		return MP;
    }

	void limpaMatriz(int linha, int coluna, int **matriz){
		for( int i=0; i<linha; i++){
			free(matriz[i]);
		}
	free(matriz);
	}



int main(){
	
	system("color 0a");
	
	cout<<"Digite o tamanho da matriz 1:"<<endl;
	cin>>m1>>n1;
	cout<<"Digitie os valores da matriz 1:"<<endl;
	M1 = geraMatriz (m1, n1, M1);
	M1 = preencherMatriz (m1, n1, M1);

	cout<<"Digite o tamanho da matriz 2:"<<endl;
	cin>>m2>>n2;
	cout<<"Digitie os valores da matriz 2:"<<endl;
	M2 = geraMatriz (m2, n2, M2);
	M2 = preencherMatriz (m2, n2, M2);

	if(n1 == m2){
		MP = geraMatriz (m1, n2, MP);
		MP = multMatriz (M1, M2, MP);
		cout<<"CARREGANDO MATRIZ..."<<endl;
		mostrarMatriz (m1, n2, MP);
		limpaMatriz (m1, n2, MP);
	}
	else{
		cout <<"erro"<<endl;}

		limpaMatriz(m1, n1, M1);
		limpaMatriz(m2, n2, M2);
	
	return 0;
}
